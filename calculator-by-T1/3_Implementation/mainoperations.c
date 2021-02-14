#include "opertions.h"
{
    double square,cube,cube_root,square_root;int factorial;
    printf("Select the operation\n");
    printf("1>Square\n2>Cube\n3>Square_root\n4>Cube_root\n5>Factorial\n");
    int select_function;
    scanf("%d",&select_function);
    if(select_function==1)
    {
        double sq;
        printf("Enter a number: ");
        scanf("%lf",&sq);
        {
            square=sq*sq;
            printf("%lf",square);
            printf("Square of the number is ");
            return 0;
            
        }
        
    }
    else if(select_function==2)
    {
        double cu;
        printf("Enter a number: ");
        scanf("%lf",&cu);
        {
            cube=cu*cu*cu;
            printf("%lf",cube);
             printf("Cube of the number is ");
            return 0;
            
        }
                
         }
         else if(select_function==3)
         {
            double sq_rt;
            printf("Enter a number: ");
            scanf("%lf",&sq_rt);
            {
                square_root=sqrt(sq_rt);
                 printf("Square root of the number is ");
                printf("%lf",square_root);
                return 0;
                
            }
         }
         else if(select_function==4)
         {
            double cu_rt;
            printf("Enter a number: ");
            scanf("%lf",&cu_rt);
            {
                cube_root=cbrt(cu_rt);
                 printf("Cube root of the number is ");
                printf("%lf",cube_root);
                return 0;
                
            }
         }
         else if(select_function==5)
         {
             int n, i;
             unsigned long long fact = 1;
             printf("Enter an integer: ");
             scanf("%d", &n);
             // shows error if the user enters a negative integer
             if (n < 0)
             printf("Error! Factorial of a negative number doesn't exist.");
             else 
             {
                 for (i = 1; i <= n; ++i)
                 {
                     fact *= i;
                     
                 }
        printf("Factorial of %d = %llu", n, fact);
             }
             return 0;
         }
    
}