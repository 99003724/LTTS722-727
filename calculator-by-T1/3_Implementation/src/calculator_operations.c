#include <calculator_operations.h>

int additon(int operand1, int operand2)
{
    return operand1 + operand2;
}

int substraction(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiplification(int operand1, int operand2)
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
