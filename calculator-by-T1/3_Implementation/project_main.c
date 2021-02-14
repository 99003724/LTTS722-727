
#include<stdio.h>
#include<stdlib.h>
#include <calculator_operations.h>
int main()
{
int highlevel;
int lowlevel1;
printf("What do you want to do?\n1>Arithmetic\n2>Conversion\n3>Algebric\n4>Inbuild\n");

scanf("%d", &highlevel);

switch(highlevel)
{
    case 1:
    {
    printf("What do you want to do?\n Addition subtraction multlipication");
    scanf("%d", &choice2);
    switch(lowlevel1)
    {
        case 1:
        {   
             int operand1, operand2;
            printf("Enter first number ");
            scanf("%d", &operand1);
            printf("Enter second number ");
            scanf("%d", &operand2);
            printf("Sum is: %d", addition(operand1,operand2));
            break;
        }
        case 2:
        {
            int operand1, operand2;
             printf("Enter first number ");
            scanf("%d", &operand1);
            printf("Enter second number ");
            scanf("%d", &operand2);
            printf("Difference is: %d",substraction(operand1,operand2));
            break;
        }
        case 3:
        {
            double operand1, operand2;
            printf("Enter first number ");
            scanf("%lf", &operand2);
            printf("Enter second number ");
            scanf("%lf", &operand2);
            printf("Product is: %.3lf",multiplication(operand1,operand2));
            break;
        }
        case 4:
        {
            double operand1, operand2;
            printf("Enter first number:");
            scanf("%lf", &operand1);
            printf("Enter second number:");
            scanf("%lf", &operand2);
            if(operand2>0)
            {
            printf("Result is: %.5lf",division(operand1,operand2));
            }
            else
            {
                printf("Cannot Divide by zero");
            }
             break;
        }
        case 5:
            {
            float operand1,operand2;
            printf ("enter the number1:");
            scanf("%f",&operand1);
            printf("enter the operand2:");
            scanf("%f",&operand2);
            printf("modulous is %.2f",modulous(operand1,operand2));
            }
        default:
            {
            printf("invalid operation");
            }
            break;
    }   
 case 2
