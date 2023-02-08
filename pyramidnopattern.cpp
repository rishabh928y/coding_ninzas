#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i=1;

    while(i<=n){
        int k = 1;
        while(k<=n-i){
        cout << " ";
        k = k + 1;
    }
    int j = 1;
    while(j<=i){
        cout << i+1-j;
        j=j+1;
    }
    j=1;
    while(j<=(i-1)){
        cout << j+1;
        j = j + 1;
    }
    cout << endl;
    i = i + 1;
    }
    

    return 0;
}