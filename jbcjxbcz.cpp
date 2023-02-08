#include<iostream>
using namespace std;

int main(){
    int i, j;
    cin >> i >> j;
    int arr[i][j];
    int k=i;
    int length = i;
    int z = i;

    for(i=0; i<length; i++){
        for(j=0; j<length; j++){
            cin >> arr[i][j]; 
        }
    }

    
        for(i=0; i<length; i++){
            k = z;
           while(k>0){
                for(j=0; j<length; j++){
                 cout << arr[i][j]<< " ";
            } 
            cout << endl;
            k--;
           } 
           z--;
        }
     
    return 0;
}