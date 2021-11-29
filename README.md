To remove compile warnings "warning: alias declarations are a C++11 extension [-Wc++11-extensions]" : May need to compile program with the following tag "-std=c++11"

Example (on MacOS): clang++ constArg.cpp -std=c++11

***ALSO (The following information can be found in the code comments but it answers the main question of the exercise):

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
