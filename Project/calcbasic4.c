#include <stdio.h>
#include <math.h>
char s;
float operand1,operand2,result;
printf("enter the operand1");
scanf("%f",&operand1);
scanf("%f"&operand2);
    switch(op)
    {
        case '+': 
            result = operand1 + operand2;
            break;

        case '-': 
            result = operand1 - operand2;
            break;

        case '*': 
            result = oprenad1 * operand2;
            break;

        case '/': 
            result = operand1 / operand2;
            break;

        default: 
            printf("Invalid operator");
    }

    printf("%.2f %c %.2f = %.2f", operand1, s, operand2, result);