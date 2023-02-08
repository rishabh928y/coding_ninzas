#include<iostream>
using namespace std;

class A
{
    int a;
    public :
    void get_a(int num1);
    int display_a();
};

void A :: get_a(int num1)
{
    a = num1;
}

int A :: display_a()
{
    return a;
}

class B : public A
{
    int b;
    public :
    void get_b(int num2);
    int display_b();
};

void B :: get_b(int num2)
{
    b = num2;
}

int B :: display_b()
{
    return b;
}

class C : public B
{
    int c;

    public : 
    void get_c(int num3)
    {
        c = num3;
    }
    int display_c();
};

int C :: display_c()
{
    return c;
}

int main(){
    C obj;
    obj.get_a(10);
    obj.get_b(20);
    obj.get_c(30);

    cout << obj.display_a() << endl;
    cout << obj.display_b() << endl;
    cout << obj.display_c() << endl;

    return 0;
}
