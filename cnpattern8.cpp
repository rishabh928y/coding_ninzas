#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i=1;
    char v = 'A';

    while(i<=n){
        int j=1;
        while(j<=n){
            cout << v;
            v = v + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
        v = 'A' + i -1;
    }
    return 0;
}