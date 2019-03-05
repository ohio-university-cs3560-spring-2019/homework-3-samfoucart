#include "hw7.h"
#include <cmath>
#include <cstdarg>

double stddev(int n, ...)
{
  double total = 0;
  double average = 0;
  double variance = 0;
  int value;

  va_list args;
  va_start(args, n);
  for (size_t i = 0; i < n; ++i)
    {
      total += va_arg(args, int);
    }
  va_end(args);

  average = total / n;

  va_start(args, n);
  for (size_t i = 0; i < n; ++i)
    {
      value = va_arg(args, int);
      variance += ((value - average) * (value - average));
    }
  va_end(args);

  return sqrt(variance) / (n + 1);
}
