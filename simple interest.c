#include<stdio.h>

int main(){
    int a, b, c;
    printf("The value of principle is :");
    scanf("%d", &a);
    printf("The value of rate is :");
    scanf("%d", &b);
    printf("The value of time is :");
    scanf("%d", &c);
    float d = a*b*c;
    printf("The simple interest for the given values iS:");
    printf("%d", d/100);
    return 0;
}