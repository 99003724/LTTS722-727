
#include<stdio.h>
#include<stdlib.h>
#include <calculator_operations.h>
int main()
{
int highlevel;
int choice2;
int choice3;
int choice4;
printf("What do you want to do?\n1>Arithmetic\n2>Conversion\n3>Algebric\n4>Inbuild\n");

scanf("%d", &highlevel);

switch(highlevel)
{
    case 1:
    {
    printf("What do you want to do?\n Addition subtraction multlipication");
    scanf("%d", &choice2);
    switch(choice2)
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
    case 2