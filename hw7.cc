/***********************************
 * @file hw7.cc
 * @author Sam Foucart
 * @date 3/4/19
 * 
 * This program calculates the standard deviation
 * of a variac set of numbers.
 *
 ***********************************/

#include "hw7.h"
#include <cmath>
#include <cstdarg>

double stddev(int n, ...)
{
  // Total is the sum of the set
  double total = 0;
  // Average is the average of the set
  double average = 0;
  // Variance is the variance of the set
  double variance = 0;
  // Value is each individual value of the set
  int value;

  /////////////////////////////////
  // Getting the Total of the set
  /////////////////////////////////
  
  va_list args;
  va_start(args, n);
  for (size_t i = 0; i < n; ++i)
    {
      total += va_arg(args, int);
    }
  va_end(args);

  average = total / n;

  /////////////////////////////////
  // Calculating the variance
  /////////////////////////////////

  va_start(args, n);
  for (size_t i = 0; i < n; ++i)
    {
      value = va_arg(args, int);
      variance += ((value - average) * (value - average));
    }
  va_end(args);

  return sqrt(variance) / (n + 1);
}
