/** 
* @file calculator_operations.h
* Calculator application with 4 mathematical operations
*
*/
#ifndef __CALCULATOR_OPERATIONS_H__
#define __CALCULATOR_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>
#include<math.h>
//#include <stdio_ext.h>

/**
*  adds the operand1 and operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
int addition(int operand1, int operand2);

/**
*  subtracts the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 - operand2
*/
int substraction(int operand1, int operand2);

/**
*  multiply the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 * operand2
*/
double multiplication(int operand1, int operand2);


/**
* divides the operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the operand1 / operand2
* @note returns 0 for divide by 0 error
*/
double division(int operand1, int operand2);
/**
* divides the operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the operand1 % operand2
* @note returns result of operand1 % operand2
*/
float modulous(int operand1, int operand2);
/**
*  finds square of the number
* @param[in]  sq 
* @return Result of sq*sq
*/
double square(double sq);

/**
*  finds cube of the number
* @param[in] cu 
* @return Result of cu*cu*cu
*/
double cube(double cu);

/**
*  finds square root of the number
* @param[in] sq_rt
* @return Result of sqrt(sq_rt)
*/
double square_root(double sq_rt);


/**
* finds cube root of the number 
* @param[in] cu_rt  
* @return integer value of the operand1 / operand2
* @note returns 0 for divide by 0 error
*/
double cube_root(double cu_rt);


/**
* finds factorial of the number 
* @param[in]  
* @return factorial
*/
int factorial(int number);

#endif  /* #define __CALCULATOR_OPERATIONS_H__ */
