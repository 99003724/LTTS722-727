#include <operations.h>

double square(double sq)
{
    return sq*sq;
}

double cube(double cu)
{
    return cu*cu*cu;
}

double sqrt(double sq_rt)
{
    return sqrt(sq_rt);
}

double cbrt(double cb_rt)
{
    return cbrt(cb_rt);
}
 int factorial(int number)
{
  int iteration, factorial=1;
  for(iteration=1; iteration<=number; iteration++)
  {
    	factorial=factorial*iteration;
        }
  return factorial;
 

