#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter a and b" << endl;
    cin >> a >> b;
    bool isEqual = (a==b);
    bool isAGreater = (a>b);
    bool isALess = (a<b);
    cout << "Are they Equal " << isEqual << endl;
    cout << "isAGreater " << isAGreater << endl;
    cout << "isALess " << isALess << endl;
    return 0;
}