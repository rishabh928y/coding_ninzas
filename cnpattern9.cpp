#include<iostream>
using namespace std;


int main(){

    int n;
    cin >> n;
    int i=1;
    char v = 'A';
    
    while(i<=n){
        int j=1;
        while(j<=i){
        cout << v;    
        v = v + 1;
        j = j + 1;    
        }
        cout << endl;
        v = 'A' + i;
        i = i + 1;
    }
  
}

