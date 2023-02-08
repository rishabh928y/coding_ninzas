#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr;

    ptr = &a;
    cout << "The value of a is : " << *ptr;
    *ptr = *ptr+a;
    cout << "\nThe revised value of a is " << a;
    return 0;
}