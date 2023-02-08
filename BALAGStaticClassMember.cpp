#include<iostream>
using namespace std;

class item
{
    static int count;
    int number;

    public :
    void getData(int a)
    {
        number = a;
        count ++;
    }

    void getCount(void)
    {
        cout << "count: ";
        cout << count << "\n";
    }
};

int item :: count;

int main()
{
    item a, b, c;
    a.getCount();
    b.getCount();
    c.getCount();

    a.getData(100);
    b.getData(200);
    c.getData(300);

    cout << "After reading data" << "\n";

    a.getCount();
    b.getCount();
    c.getCount();     
    return 0;
}