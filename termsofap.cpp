#include<iostream>
using namespace std;

int main() {
	int n;
    cin >> n;
    int i, c=0;
    
    for(i=1; i<=1000000; i++){
        if((3*i + 2) % 4 != 0){
            cout << (3*1)+2;
            c++;
        }
        if(c==n){
            break;
        }
    }
	
}
