#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i=1;

    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout << j;
            j = j + 1;
        }
        j=1;
        while(j<=2*(i-1)){
            cout << "*";
            j = j + 1;
        }
        j=1;
        while(j<=n-i+1){
           cout << n-i-j+2;
           j = j + 1;   
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}