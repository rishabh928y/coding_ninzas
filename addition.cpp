#include<stdio.h>

void reversearray(int arr[], int n){
    int i;

    for(i=0; i<n/2; i++){
        int swap = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = swap;
    }

}
void sumarray(int arr[], int n){
    int i, z=0;
    for(i=0 ;i<n; i++){
        z = z + arr[i];
    }
    printf("%d", z);
}

int main(){

     int k;
     scanf("%d", k);
     int arr[k];
     int i;
     for(i=0 i<k; i++){
         scanf("%d", &arr[i]);
     }    

     reversearray(arr, k);
     for(i=0; i<k; i++){
         printf("%d", arr[i]);
     }

     prinf("\n");
     sumarray(arr, k);

     return 0;
}