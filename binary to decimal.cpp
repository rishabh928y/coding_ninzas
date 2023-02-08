#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int n;
    cin >> n;
    int i;
    int k = 0;
    int pv=1;
    
    while(n>0){
   
        if(n%10 == 1){
            k = k + pow(2, pv-1);
        }
        n = n/10;
        pv++;
    }
    cout << k;
	
}
