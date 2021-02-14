
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
    
case 2{}
Case 3{}
case 4
{
    int fun;
    scanf("%d",&fun);
    if(fun==1 || fun==2)
      {
          if(func==1)
     {   float radius,length,breadth,sideOne,sideTwo,sideThree,area,perimeter,s;
         int figure;
         printf("Choose the figure :\n");

         printf("1>Circle\n2>Triangle\n3>Reactangle\n");

         scanf("%d",&figure);

         if(figure==1)
         {
                 int ap;
                 printf("1>Area 2>Perimeter\n");
                 scanf("%d",&ap);
                 if(ap==1)
                 {
                 printf("Radius:");
                 scanf("%f",&radius);
                 area = PI * radius * radius;
                 printf("%f",area);
                 return 0;
                 }
                 else
                 {
                 printf("Radius:");
                 scanf("%f",&radius);
                 perimeter=2*PI*radius;
                 printf("%f",perimeter);
                 return 0;
                 }
         }
         else if(figure==2)
         {
                 int ap;
                 printf("1>Area 2>Perimeter\n");
                 scanf("%d",&ap);
                 if(ap==1)
                 {
                 printf("Enter the length of three sides of triangle\n");
                 scanf("%f %f %f", &sideOne, &sideTwo, &sideThree);
                 s = (sideOne + sideTwo + sideThree)/2;
                 area = sqrt(s*(s-sideOne)*(s-sideTwo)*(s-sideThree));
                 printf("%f",area);
                 return 0;
                 }
                 else
                 {
                 printf("Enter the length of three sides of triangle\n");
                 scanf("%f %f %f", &sideOne, &sideTwo, &sideThree);
                 perimeter = sideOne+sideTwo+sideThree;
                 printf("%f",perimeter);
                 return 0;
                 }
         }
         else if(figure==3)
         {
                 int ap;
                 printf("1>Area 2>Perimeter\n");
                 scanf("%d",&ap);
                 if(ap==1)
                 {
                 printf("Enter the value of length and breadth\n");
                 scanf("%f %f",&length,&breadth);
                 area=length*breadth;
                 printf("%f",area);
                 return 0;
                 }
                 else
                 {
                 printf("Enter the value of length and breadth\n");
                 scanf("%f %f",&length,&breadth);
                 perimeter = length+breadth ;
                 printf("%f",perimeter*2);
                 return 0;
                 }

         }
         else
         {
             printf("Invalid Input");
             return 0;
         }

   }
else if(func==2)
{    printf("1>Polar to Cartesian coordinate\n2>Cartesian to Polar\n");
     int conv;
     scanf("%d",&conv);
     if(conv==1)
     {
     float x, y, r, theta;

	 printf("Enter radius of polar coordinate (r): \n");
	 scanf("%f", &r);
	 printf("Enter angle of polar coordinate in degree (theta): \n");
	 scanf("%f", &theta);

	 /* Converting theta from degree to radian */
	 theta = theta * PI/180.0;

	 /* Calculating cartesian coordinate x */
	 x = r * cos(theta);

	 /* Calculating cartesian coordinate y */
	 y = r * sin(theta);

	 printf("Cartesian coordinates is: (%0.3f, %0.3f)", x, y);
	 getch();
	 return(0);
     }
     else
     {
     float x, y, r, theta;

	 printf("Enter cartesian coordinate x: \n");
	 scanf("%f", &x);
	 printf("Enter cartesian coordinate y: \n");
	 scanf("%f", &y);


	 /* Calculating r */
	 r = sqrt(x*x + y*y);

	 /* Calculating theta in radian */
	 theta = atan(y/x);

	 /* Converting theta from degree to radian */
	 theta = 180.0 * theta/ PI;

	 printf("Polar coordinate is: r = %0.2f and theta = %0.2f in degree", r, theta);
	 getch(); /* Holds Screen */

	 return(0);
     }
}
else
         {
             printf("Invalid Input");
             return 0;
         }
      }
else
    printf("Invlaid");


} 
    }   
 
