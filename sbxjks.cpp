#include<iostream>
using namespace std;

int main(){
    int n;
    int a[n];
    int i, k=0, m=0, j;


    for(i=1; i<=n; i++){
        scanf("%d", &a[i]);
        if(a[i] > k){
            k = a[i];
        }
        for(j=1; j<=n; j++){
            if(k >= a[j] && a[j] > m){
                m = a[j];
            }
        }
     printf("%d", m);
    }
    return 0;
}