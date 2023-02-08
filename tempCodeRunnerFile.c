#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i=1;

    while(i<=(n+1)/2){
        int k=1;
        while(k<=n-i){
            printf(" ");
            k = k + 1;
        }

        int j=i;
        while(j>=1){
            printf("%d", j);
            j = j - 1;
        }
        j = 2;
        while(j<=i){
            printf("%d", j);
            j = j + 1;
        }
        printf("\n");
        i = i + 1;
    }
    return 0;
}