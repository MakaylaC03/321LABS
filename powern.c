#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#else
#include <time.h>
#endif

double powern(double d, unsigned n) {
  double x = 1.0;
  unsigned j;

  for (j = 1; j <= n; j++)
    x *= d;

  return x;
}

int main(void) {
  double sum = 0.0;
  unsigned i;

#ifdef _WIN32
  LARGE_INTEGER frequency;
  LARGE_INTEGER start;
  LARGE_INTEGER end;
  double interval;

  QueryPerformanceFrequency(&frequency);
  QueryPerformanceCounter(&start);
#else
  struct timespec start, end;
  double interval;

  clock_gettime(CLOCK_REALTIME, &start);
#endif

  // The loop whose time you want to measure
  for (i = 1; i <= 1000000000; i++) {
    sum += powern(i, i % 5);
  }

#ifdef _WIN32
  QueryPerformanceCounter(&end);
  interval = (double)(end.QuadPart - start.QuadPart) / frequency.QuadPart;
  printf("Elapsed time (Windows) = %f seconds\n", interval);
#else
  clock_gettime(CLOCK_REALTIME, &end);
  interval = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;
  printf("Elapsed time (Linux) = %f seconds\n", interval);
#endif

  printf("sum = %g\n", sum);
  return 0;
}
