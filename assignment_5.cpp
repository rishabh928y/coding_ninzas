#include<iostream>
#include<math.h>
using namespace std;

class interest
{
   float p, r, t;
    
   public : 
   interest();
   interest(float, float, float);
   
   int print()
   {
      float r1 = p*pow((1+r/100), t);
      return r1 - p;
   }

   interest(interest &i)
   {
      p = i.p;
      r = i.r;
      t = i.t;
   }

   ~interest()
   {

   }

};

interest :: interest()
{
    
    cout << "Enter value of p: ";
    cin >> p;
    cout << "Enter value of r: ";
    cin >> r;
    cout << "Enter value of t: ";
    cin >> t;

}

interest :: interest(float a, float b, float c)
{
    
    p = a;
    r = b;
    t = c;

}


int main(){

    interest p;
    cout << "interest using default constructor: " << p.print() << endl;
    interest p1(3455, 5.8, 3);
    cout << "interest using parametrized constructor: " << p1.print() << endl;
    interest p2 = p1;
    cout << "interest using copy constructor: " << p2.print() << endl;

    return 0;
}