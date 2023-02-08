#include<iostream>
using namespace std;

class complex
{

    int x, y;

    public : 
    void input();
    void add(complex a, complex b);

};

void complex :: input()
{
    cout << "Enter complex number: " <<endl;
    
    cout << "Enter real part: ";
    cin >> x;
    cout << "Enter imaginary part: ";
    cin >> y;
    cout << endl;
}

void complex :: add(complex a, complex b)
{
    
    float r1 = a.x + b.x;
    float i1 = a.y + b.y;
    cout << "addition: " << r1 << "+" << i1 << "i" << endl;
    
    }

int main(){
    complex c1, c2;
    c1.input();
    c2.input();
    c1.add(c1, c2);

    return 0;
}