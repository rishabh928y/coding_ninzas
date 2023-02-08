#include<iostream>
using namespace std;

void mergeSort(int *input, int st, int end){

    if(st>=end){
        return;
    }
        int mid = (st+end)/2;
        mergeSort(input, st, mid);
        mergeSort(input, mid+1, end);

        int i=st; 
        int j=mid+1;
        int k=0;
        int arr[end-st+1];

        while(i<=mid && j<=end){
           if(input[i]>input[j]){
            arr[k] = input[j];
            j++;
            k++;
            }
        else if(input[i] <= input[j]){
            arr[k] = input[i];
            i++;
            k++;
            }
        }  

        while(i<=mid) {
            arr[k] = input[i];
            k++;
            i++;
        }

        while(j<=end) {
            arr[k] = input[j];
            k++;
            j++;
        }
        

        for(int t=0; t<end-st+1; t++) {
            input[st+t] = arr[t];
        }



}

void mergesort(int *input, int n){

    mergeSort(input, 0, n-1);
}

int main(){
    int n;
    cin >>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    mergesort(arr, n);

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}