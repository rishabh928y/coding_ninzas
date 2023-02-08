#include<iostream>
using namespace std;

int main(){
    static int salary = 0;
    int *p = new int[10];

    for(int i=0; i<10; i++){
    cout << "Enter salary of employee " << i+1 << " is: ";
    cin >> p[i];
    }
   
    for(int i=0; i<10; i++){
        salary += p[i]; 
    }

    cout << "salary of 10 employees is " << salary;
    return 0;
}