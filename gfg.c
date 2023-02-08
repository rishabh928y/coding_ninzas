#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i = 1;
    int val =1;
   

    while(i<=n){
        int j=1;
        while(j<=i){
           printf("%d ", val);
           val = val + 1;
           j = j + 1;
        }
    
        printf("\n");
        i = i + 1;
    
    }
    return 0;
}
