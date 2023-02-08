#include<iostream>
using namespace std;

const float pi = 3.14;

class cal_area
{
    public : 
    void area(float l, float b);
    void area(int k=10){
        cout << "CIRCLE" << endl;
        cout << "area of circle is " << pi*k*k << endl;
    }

    void area(long int d, int e);
    void area(long a);
    void area(float c, long int g);
    void area(double j);
    void area(float h, double f);

};

void cal_area :: area(float l, float b)
{
    cout << "RECTANGLE" << endl;
    cout << "area of rectangle is " << l*b << endl;
}

void cal_area :: area(long int d, int e)
{
    cout << "TRIANGLE" << endl;
    cout << "area of triangle is " << 0.5*d*e << endl;
}

void cal_area :: area(long a)
{
    cout << "SQUARE" << endl;
    cout << "area of square is " << a*a << endl;
}
   
void cal_area :: area(float c, long int g)
{
    cout << "CONE" << endl;
    cout << "area of cone is " << pi*c*g << endl;

}
void cal_area :: area(double j)
{
    cout << "SPHERE" << endl;
    cout << "area of sphere is " << 4*pi*j*j;
}

void cal_area :: area(float h, double f)
{
    cout << "CYLINDER" << endl;
    cout << "area of cylinder is " << 2*pi*h*f << endl;
}

int main(){
    int e, k;
    float l, b, h, c;
    double f, j;
    long int g, d;
    long a;

    cal_area obj;

    cout << "Enter the radius of circle \n";
    cin >> k;
    obj.area(k);

    cout << "Enter the sides of rectangle \n";
    cin >> l, b;
    obj.area(l, b);

    cout << "Enter the sides of triangle \n";
    cin >> d, e;
    obj.area(d, e);

    cout << "Enter the side of square \n";
    cin >> a;
    obj.area(a);

    cout << "Enter the radius of cone \n";
    cin >> c;
    cout << "Enter the height of cone \n";
    cin >> g;
    obj.area(c, g);

    cout << "Enter the radius of sphere \n";
    cin >> j;
    obj.area(j);

    cout << "Enter the radius of cylinder \n";
    cin >> h;
    cout << "Enter the height of cylinder \n";
    cin >> f; 
    obj.area(h, f);

    return 0;
}