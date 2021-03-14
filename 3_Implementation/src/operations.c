#include <operations.h>
#include<math.h>

double square1(double sq)
{
    return sq*sq;
}

double cube1(double cu)
{
    return cu*cu*cu;
}


double square_root(double sq_rt)
{
    double temp,sqrt;
    sqrt=sq_rt/2;
    temp=0;
    while(sqrt!=temp)
    {
        temp =sqrt;
        sqrt=(sq_rt/temp +temp)/2;
    }
    return sqrt;
}

double cube_root(double cb_rt)
{
    double i, precision = 0.000001;
   
   for(i = 1; (i*i*i) <= cb_rt; ++i);         //Integer part

   for(--i; (i*i*i) < cb_rt; i += precision);  //Fractional part
   
   return i;
}




