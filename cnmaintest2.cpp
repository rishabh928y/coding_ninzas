#include<iostream>
using namespace std;

int main(){
    int n, i=0, j=0;
    int arr[n];
    cin >> n;

    for(i=0; i<n; i++){
        cin >> arr[i];
    }

    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
             if(arr[i] >= arr[j]){
                 continue;
             }
             else{
                 break;
             }
             cout << arr[i] << " ";
        }
    }
    
    cout << arr[n-1];
    return 0;
}