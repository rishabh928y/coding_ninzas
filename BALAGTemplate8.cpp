#include<iostream>
#include<string>
using namespace std;

template<class T1, class T2>
void display(T1 x, T2 y) {
    cout << x << " " << y << "\n";
}

int main(){
    cout << "Calling function template with int and character string type parameter...\n";
    display(1999, "EBG");
    cout << "Calling function template with float and intehger type parameter...\n";
    display(12.34, 1234);
       
    return 0;
}