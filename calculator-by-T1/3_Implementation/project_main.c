
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
            printf("Sum is: %d", add(operand1,operand2));
            break;
        }
        case 2:
        {
            int operand1, operand2;
             printf("Enter first number ");
            scanf("%d", &operand1);
            printf("Enter second number ");
            scanf("%d", &operand2);
            printf("Difference is: %d",substract(operand1,operand2));
            break;
        }
        case 3:
        {
            double operand1, operand2;
            printf("Enter first number ");
            scanf("%lf", &operand2);
            printf("Enter second number ");
            scanf("%lf", &operand2);
            printf("Product is: %.3lf",multiply(operand1,operand2));
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
            printf("Result is: %.3lf",divide(operand1,operand2));
            }
            else
            {
                printf("Cannot Divide by zero");
            }
            
            break;
        }
    case 2:
    
    {
    //char a[20]="";
        float degree,rad;
        printf("what do you want convert?give the choice as 1Degree. or 2.Radian\n");
        char b[10];
        scanf("%c",b);
        if(b[0]="D")
        {
           printf("give the data to convert from degrees to radian\n");
           scanf("%f",&degree);
           printf("%f", rad(degree));}
        else if(b[0]="R")
        {
           printf("give the data to convert from radian to degrees\n");
           scanf("%f",&rad);
           printf("%f",degree(rad));
        }
        else
        {
           printf("Invalid inputs");
        }
    }

}
