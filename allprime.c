#include<stdio.h>

int main(){
    int n = 5;
    int i = 1;
    int val =1;
    printf("Second Pattern\n\n");
    
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

 

