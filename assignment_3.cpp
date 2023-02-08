#include<iostream>
using namespace std;

class perform{
    int a, b;
    
    public :

    void put_values()
    {
        cout << "Enter first number: " << endl;
        cin >> a;
        cout << "Enter second number: " << endl;
        cin >> b;
    }

    void get_values()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }

    void add()
    {   
        cout << "The addition of a and b gives: ";
        cout << a+b << endl;
    }

    void multiply()
    {  
        cout << "The multiplication of a and b gives: ";
        cout << a*b << endl;
    }

    void subtract()
    {
        cout << "The subtraction of a and b gives: ";
        cout << a-b << endl;
    }

    void divide()
    { 
        cout << "The division of a and b gives: ";
        cout << (float)a/b << endl;
    }

};

int main(){
    perform x;

    x.put_values();
    x.get_values();
    x.add();
    x.subtract();
    x.multiply();
    x.divide();

    return 0;
}