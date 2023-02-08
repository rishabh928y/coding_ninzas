
#include<stdio.h>

int main(){
    int n=5;
    int i=1;
    printf("Third Pattern\n")

    while(i<=n){
       int j =1;
       while(j<=i){
           printf("*");
           j = j + 1;
       }

    printf("\n");
       i = i + 1;
    }
    return 0;
}
