
#include<stdio.h>
#include<stdlib.h>
#include<calculator_operations.h>
#include<calculator_conversion.h>

    case 2:
    
    {
    //char a[20]="";
        float degree,rad;
        printf("what do you want convert?give the choice as 1Degree. or 2.Radian\n");
        scanf("%d",&choice3);
        switch(choice3){
        /**char b;
        scanf("%c",&b);
        if(b=='D')**/
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
        }}
    }

}

