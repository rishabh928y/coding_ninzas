
// PROGRAM OBJECTIVE
// WAP using extern and static keyword.

// INTRODUCTION
// STATIC KEYWORD: Static variables in a Function: When a variable is declared as static, space for it gets allocated for the lifetime of the program. Even if the function is called multiple times, space for the static variable is allocated only once and the value of variable in the previous call gets carried through the next function call. This is useful for implementing coroutines in C/C++ or any other application where the previous state of function needs to be stored.
// EXTERN KEYWORD: The variables that are defined outside a function in C++ are called global variables, and such global variables can be accessed globally during the execution of the function and global variables are also called external variables. The keyword used to define and declare external variables is extern, and functions can also be declared globally using the keyword extern C in C++.

// PROGRAM CODE
#include<iostream> using namespace std;

extern int ext_a;
// extern int ext_a; // Allowed as we are only declaring the variable and not defining

class Person { public:
static int count;
Person() { count ++ ; }
};
int Person::count;

int main() {
Person p1, p2, p3;
cout<< "Count printed by 1st object - "<< p1.count<< endl; cout<< "Count printed by 2nd object - "<< p2.count<< endl;

return 0;
}



// OUTPUT
// Count printed by 1st object - 3 
// Count printed by 2nd object - 3
