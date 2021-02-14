#ifndef OPERATIONS
#define OPERATIONS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
     
double square(double sq)
{
return(sq*sq);
}
double cube(double cu)
{
    return (cu*cu*cu);
}
double square_root(double sq_rt)
{
    return sqrt(sq_rt);
}
double cube_root(double cu_rt);
{
    return cbrt(cu_rt);
}
int factorial(int number)
{
  int iteration, factorial=1;
  for(iteration=1; iteration<=number; iteration++)
  {
    	factorial=factorial*iteration;
  }
  return factorial;
}
#endif