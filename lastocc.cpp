#include<iostream>
using namespace std;

int lastocc(int input[], int size, int i, int x){
    if(i==size){
        return -1;
    }
    
    int restArray = lastocc(input, size, i+1, x);
    if(restArray!=-1){
        return restArray;
    }

    if(input[i]==x){
        return i;
    }
    return -1;
}
int main(){
    int n;
    cin >>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int x;
    cin >>x;
    cout << lastocc(arr, n, 0, x)<<endl;
    return 0;
}
