#include<iostream>
using namespace std;


int main() {
    int n;
    cin >> n;
    int i=1;
    int z = (n+1)/2;
    
    while(i<=z){
        int k =1;
        while(k<=(z-i)){
            cout << " ";
            k = k + 1;
        }
        int j=1;
        while(j<=(2*i-1)){
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
           i = (n+1)/2 + 1;
        while(i>z && i<=n){
            int k = 1;
            while(k<=(i-z)){
                cout << " ";
                k = k + 1;
            }
            int j=1;
            while(j<=(2*(n-i)+1)){
                cout << "*";
                j = j + 1;
            }
            cout << endl;
        i = i + 1;
    }
}
        
