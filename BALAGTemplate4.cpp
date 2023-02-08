#include<iostream>
using namespace std;
template<class T1 = int, class T2 = int>

class Test{
    T1 a;
    T2 b;
    public :
    Test(T1 x, T2 y) {
        a = x;
        b = y;
    }
    void show() {
        cout << a << " and " << b << "\n";
    }
};


int main(){
    Test<float, int>test1(1.23, 123);
    Test<int, char>test2(100, 'w');
    Test <> test3 ('a', 12.983);
    test1.show();
    test2.show();
    test3.show();

    return 0;
}