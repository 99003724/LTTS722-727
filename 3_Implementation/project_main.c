
#include<stdio.h>
#include<stdlib.h>
#include<calculator_operations.h>
#include<conversion.h>
#include<inbuild_functions.h>
#include<operations.h>


int main()
{ 
    
int highlevel;
int lowlevel1;
int choice1;
int choice3;
printf("What do you want to do?\n1>Arithmetic\n2>Conversion\n3>Algebraic\n4>Inbuilt\n");

scanf("%d", &highlevel);

switch(highlevel)
{
    case 1:
    {
    printf("What do you want to do?\n1>Addition\n2>subtraction\n3>multiplication\n");
    scanf("%d", &lowlevel1);
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
            printf("Difference is: %d", subtraction(operand1,operand2));
            break;
        }
        case 3:
        {
            int operand1, operand2;
            printf("Enter first number ");
            scanf("%d", &operand1);
            printf("Enter second number ");
            scanf("%d", &operand2);
            printf("Multiply is: %d", multiply(operand2,operand1));
            break;
        }
         default:
          break;   
           
    }
    break;
}
    
case 2:
{
        float degree,rad;
        printf("what do you want convert?give the choice as 1Degree. or 2.Radian\n");
        scanf("%d",&choice3);
        switch(choice3)
        {
            case 1:
            {
                printf("give the data to convert from degrees to radian\n");
                scanf("%f",&degree);
                printf("%f", Radian(degree));
                break;
            }
            case 2:
            {
                printf("give the data to convert from radian to degrees\n");
                scanf("%f",&rad);
                printf("%f",Degree(rad));
                break;
            }
            default : printf("it should not come here");
        }
        break;
    }


    
case 3:
    {
    printf("Select the operation\n");
    printf("1>Square\n2>Cube\n3>Square_root\n4>Cube_root\n");
    int select_function;
    scanf("%d",&select_function);
    if(select_function==1)
    {
        double sqrr;
        printf("Enter a number: ");
        scanf("%lf",&sqrr);
        printf("Square of the number is %lf",square1(sqrr));
    }
    else if(select_function==2)
    {
        double cuu;
        printf("Enter a number: ");
        scanf("%lf",&cuu);
        printf("Cube of the number is %lf",cube1(cuu));
    }
                
    else if(select_function==3)
    {
        double sq_rtt;
        printf("Enter a number: ");
        scanf("%lf",&sq_rtt);
        printf("Square root of the number is %lf", square_root(sq_rtt));            
    }
    else if(select_function==4)
    {
        double cu_rtt;
        printf("Enter a number: ");
        scanf("%lf",&cu_rtt);
        printf("Cube root of the number is %lf",cube_root(cu_rtt));
    }
    break;
      
    }
case 4:
    {    printf("1>Area of Triangle\n2>Perimeter of Triangle\n3>Area of circle\n4>Perimeter of circle\n");
         int a;
         scanf("%d",&a);
        switch (a)
        {
            case 1:
           {     float side_1,side_2,side_3,areaoftriangle;
                 printf("Enter the length of three sides of triangle\n");
                 scanf("%f %f %f", &side_1, &side_2, &side_3);
                 areaoftriangle = Area_Of_Triangle(side_1,side_2,side_3);
                 printf("%f",areaoftriangle);
                 break;
           }
           case 2:
           {     float side_1,side_2,side_3,perimeteroftriangle;
                 printf("Enter the length of three sides of triangle\n");
                 scanf("%f %f %f", &side_1, &side_2, &side_3);
                 perimeteroftriangle=Perimeter_Of_Triangle(side_1,side_2,side_3);
                 printf("%f",perimeteroftriangle);
                 break;
           }
           case 3:
           {     
                 float radius1,areaofcircle;
                 printf("Radius:");
                 scanf("%f",&radius1);
                 areaofcircle=Area_Of_Circle(radius1);
                 printf("%f",areaofcircle);
                 break;
           }
           case 4:
           {    
                 float radius2,perimeterofcircle;
                 printf("Radius:");
                 scanf("%f",&radius2);
                 perimeterofcircle=Perimeter_Of_Circle(radius2);
                 printf("%f",perimeterofcircle);
                 break;
           }
                  
            default:
            break;
        }

    }

return 0;
}
}
