#include <calculator_operations.h>

int add(int operand1, int operand2)
{
    return operand1 + operand2;
}
 
int substract(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiply(int operand1, int operand2)
{
    return operand1 * operand2;
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}

float Radian(float degree)
{   
    float rad;
    return rad=degree*(M_PI/180);
    
}
float Degree(float rad)
{ 
    float degree;
    return degree=rad/(M_PI/180);
}