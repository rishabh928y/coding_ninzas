#include<iostream>
using namespace std;

int main() {
	
    int x, n;
    cin >> x >> n;
    int i=1;
    int k=1;
    
    while(i<=n){
        k = k*x;
        i = i + 1;    
    }
	cout << k << endl;
}
