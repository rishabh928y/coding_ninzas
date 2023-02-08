#include<iostream>

using namespace std;
int main(){
    int f;
    cout << "Enter fah value" << endl;
    cin >> f;
    int c = (5.0/9) * (f - 32);
    cout << c << endl;

    int a , b;
    cout << " Enter a and b" << endl;
    cin >> a >> b;

    bool isEqual = (a == b);
    bool isAGreater = (a > b);
    bool isALess = (a < b);
    cout << "Are they Equal "  << isEqual << endl;
    cout << "is A greater " << isAGreater << endl;
    cout << "is A less" << isALess << endl;
    return 0;
}