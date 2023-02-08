#include<iostream>
using namespace std;

int main() {
	int n;
    cin >> n;
    int i=1;
    int c=0;
    int a=n;
    
    if(n==0){
        cout << "0";
    }
    
    
    while(n!=0){
        n=n/2;
        c++;
        
    }
    int arr[c];
    for(int i=0;i<c;i++){
        arr[i]=a%2;
        a=a/2;
    }
    for(int i=c-1;i>=0;i--){
      
        cout<<arr[i];
    }
}
