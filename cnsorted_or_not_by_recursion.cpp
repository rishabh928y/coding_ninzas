#include<iostream>
using namespace std;

bool sorted(int arr[], int n){
    
    if(n==1){
        return true;
     }

    bool restArray = sorted(arr+1, n-1);
     
    return (arr[0]<arr[1] && restArray);
    // or
    // if(arr[0]<arr[1] && restArray){
    //     return true;
    // }
    // else{
    //     return false;
    // }

}

int main(){
    
    int arr[] = {1,2,3,4,6,5};
    cout << sorted(arr, 6) << endl;
    return 0;
}