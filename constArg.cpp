/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Jordan Snoap
 */

/*
EXPLANATION: 
    The "const" keyword in C++ stands for constant which means something that does not change. What
    this means in programming is that if a variable is set as "const" in code, its value cannot be altered (for 
    example if we have "const int a = 5" this value can not have operations performed on it to change its value).

    If we use a "const" variable as a function argument as the question states (e.g., void f(const int);) this would 
    mean that the integer passed into the function can be used but cannot be altered.
    This could be used in cases where the coder has the knowledge that the variable passed into the function will
    not be altered in implementation of the function.
    This practice is typically not done because you will get a compile-time error if you try to alter the "const" value
    passed into the function within the code. If the "const" is removed, then the value can be altered. This is why
    it is often not used.

    IN SUMMARY: Yes, this can be used, but it can result in errors if not implemented properly so it is typically avoided.
*/ 

#include "std_lib_facilities.h"

// This function would work properly because the "const int value" being passed in is not altered directly.
int addFiveToConst(const int value)
{
    int sum;

    sum = 5 + value;

    cout << "The sum is " << sum << "\n";

    return sum;
}

// If you uncomment the line 41 code, you will get an error as we cannot alter the value of "const int value" due to
// the "const" keyword
int addFiveButAlterConst(const int value)
{
    //value = value + 5;

    cout << "The new value is " << value << "\n";

    return value;
}

int main()
{
    printf("\n***Read the comments of the code to understand purpose of this exercise***\n\n");
    addFiveToConst(5);
    addFiveButAlterConst(5);
}