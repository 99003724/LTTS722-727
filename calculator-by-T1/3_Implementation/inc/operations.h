#ifndef RESULT_H
#define RESULT_H

#include <stdio.h>
#include <stdlib.h>
#include "result.h"

/**
*  adds the operand1 and operand2 and returns the result
* @param[in]  sq 
* @return Result of sq*sq
*/
double square(double sq);

/**
*  subtracts the operand1, operand2 and returns the result
* @param[in] cu 
* @return Result of cu*cu*cu
*/
double cube(double cu);

/**
*  multiply the operand1, operand2 and returns the result
* @param[in] sq_rt
* @return Result of sqrt(sq_rt)
*/
double square_root(double sq_rt);


/**
* divides the operand1 by operand2 and returns the result 
* @param[in] cu_rt  
* @return integer value of the operand1 / operand2
* @note returns 0 for divide by 0 error
*/
double cube_root(double cu_rt);


/**
* divides the operand1 by operand2 and returns the result 
* @param[in]  
* @return integer value of the operand1 / operand2
* @note returns 0 for divide by 0 error
*/
int factorial(int number);
#endif  /* #define RESULT_H */