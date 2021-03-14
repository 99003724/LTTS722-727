#include "unity.h"
#include <conversion.h>
#include <inbuild_functions.h>
#include <operations.h>
#include<stdio.h>
#include<stdlib.h>
#include <calculator_operations.h>

/* Modify these two lines according to the project */

#define PROJECT_NAME    "Calculator"

// /* Prototypes for all the test functions */
void test_Area_Of_Triangle_testcase1(void);
void test_Perimeter_Of_Triangle_testcase1(void);
void test_Area_Of_Circle_testcase1(void);
void test_Perimeter_Of_Circle_testcase1(void);
void test_addition_testcase1(void);
void test_subtraction_testcase1(void);
void test_multiply_testcase1(void);
void test_square1_testcase1(void);
void test_cube1_testcase1(void);
void test_square_root_testcase1(void);
void test_cube_root_testcase1(void);
void test_Degree_testcase1(void);//done by shiva for conversion
void test_Radian_testcase1(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  
RUN_TEST(test_Area_Of_Triangle_testcase1);
RUN_TEST(test_Area_Of_Circle_testcase1);
RUN_TEST(test_Perimeter_Of_Circle_testcase1);
RUN_TEST(test_Perimeter_Of_Triangle_testcase1);
RUN_TEST(test_addition_testcase1);
RUN_TEST(test_subtraction_testcase1);
RUN_TEST(test_multiply_testcase1);
RUN_TEST(test_square1_testcase1);
RUN_TEST(test_cube1_testcase1);
RUN_TEST(test_square_root_testcase1);
RUN_TEST(test_cube_root_testcase1);
RUN_TEST(test_Degree_testcase1);
RUN_TEST(test_Radian_testcase1);



  /* Close the Unity Test Framework */
  return UNITY_END();
}

// /* Write all the test functions */ 
 
void test_Area_Of_Triangle_testcase1(void) 
{     
  TEST_ASSERT_EQUAL(6, Area_Of_Triangle(3, 4, 5));
} 
void test_Perimeter_Of_Triangle_testcase1(void) 
{     
  TEST_ASSERT_EQUAL(12, Perimeter_Of_Triangle(3, 4, 5));
} 
void test_Area_Of_Circle_testcase1(void) 
{     
  TEST_ASSERT_EQUAL(153, Area_Of_Circle(7));
} 


void test_Perimeter_Of_Circle_testcase1(void) 
{     
  TEST_ASSERT_EQUAL(43,Perimeter_Of_Circle(7));
} 

void test_addition_testcase1(void)
{
  TEST_ASSERT_EQUAL(30, addition(10, 20));
  TEST_ASSERT_EQUAL(-10, addition(10, -20));
}

void test_subtraction_testcase1(void)
{
  TEST_ASSERT_EQUAL(-3, subtraction(0, 3));
}

void test_multiply_testcase1(void)
{
  TEST_ASSERT_EQUAL(0, multiply(1, 0));
  
}

void test_square1_testcase1(void)
{

    TEST_ASSERT_EQUAL(256, square1(16));
    TEST_ASSERT_EQUAL(121,square1(-11));
    TEST_ASSERT_EQUAL(0,square1(0));
    TEST_ASSERT_EQUAL(841,square1(29));
    TEST_ASSERT_EQUAL(9216,square1(-96));
}

void test_cube1_testcase1(void)
{

    TEST_ASSERT_EQUAL(27, cube1(3));
    TEST_ASSERT_EQUAL(-729,cube1(-9));
    TEST_ASSERT_EQUAL(0,cube1(0));
    TEST_ASSERT_EQUAL(24389,cube1(29));
    TEST_ASSERT_EQUAL(-140608,cube1(-52));
}
void test_Degree_testcase1(void)
{
   TEST_ASSERT_EQUAL(90, Degree(1.5708));
   TEST_ASSERT_EQUAL(180, Degree(3.141593));
 }
void test_Radian_testcase1(void) 
{                     
  TEST_ASSERT_EQUAL(1.5708, Radian(90));
  TEST_ASSERT_EQUAL(3.141593, Radian(180));
}
void test_square_root_testcase1(void) {

    TEST_ASSERT_EQUAL(9, square_root(81));
    TEST_ASSERT_EQUAL(0,square_root(0));
    TEST_ASSERT_EQUAL(4,square_root(16));
    TEST_ASSERT_EQUAL(96,square_root(9216));
    }
    void test_cube_root_testcase1(void) {

    TEST_ASSERT_EQUAL(3, cube_root(27));
    TEST_ASSERT_EQUAL(0,cube_root(0));
    TEST_ASSERT_EQUAL(4,cube_root(64));
    TEST_ASSERT_EQUAL(99,cube_root(970299));
    }


