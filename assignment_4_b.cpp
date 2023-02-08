#include<iostream>
using namespace std;

class circles
{
   double r, area;
   const double pi = 3.14;

   public :
   static double totalArea;

   circles()
   {
      r = 50;
   }

   circles(int a)
   {
      r = a;
   }

   circles(circles &b)
   {
      r = b.r;
   }

   double cal_area()
   {
     area = pi*r*r;
     return area;
   }

};

double circles :: totalArea;

int main(){
    circles c1, c2(23), c3 = c1;
    circles :: totalArea = c1.cal_area() + c2.cal_area() + c3.cal_area();

    cout << "Area of first circle: " << c1.cal_area() << endl;
    cout << "Area of second circle: " << c2.cal_area() << endl;
    cout << "Area of third circle: " << c3.cal_area() << endl;

    cout << "sum of three circles is: " << circles :: totalArea;
    return 0;
}