#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i=1, j=1;

    while(i<=n){
    
        while(j<=i){
            printf("%d ", j);
            j = j + 1;
        }
        int k =1;
          while(k<= n-i){
                printf(" ");
                k = k + 1;
            }
        printf("\n");
        i = i + 1;
    }
    return 0;
}