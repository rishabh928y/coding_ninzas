#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int i;
    int j, c=0;
    
    for(i=2; i<=n; i++){
       for(j=2; j<n; j++){
           if(i%j == 0){
               c++;
           }
           
       }    
        if(c==0){
            cout << i << endl;
        }
    }
  
}


