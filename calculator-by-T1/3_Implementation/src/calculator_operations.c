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

int division(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}

float radian(float rad,float degree)
{
    rad=degree*(M_PI/180);
    return rad;
}
float Degree(float degree,float rad)
{
    degree=rad/(M_PI/180);
    return degree;
}