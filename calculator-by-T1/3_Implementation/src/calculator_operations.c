#include <calculator_operations.h>

int additon(int operand1, int operand2)
{
    return operand1 + operand2;
}
 
int substraction(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiplication(int operand1, int operand2)
{
    return operand1 * operand2;
}

double division(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}
float modulous(int operand1 , int operand2)
{
    return operand1 % operand2;
}
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
  }

