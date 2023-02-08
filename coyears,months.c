#include<stdio.h>

int main(){
    int days;
    printf("no of days: ");
    scanf("%d", &days);
    printf("no of years is %d\n", days/365);
    days = days%365;
    printf("no of months is %d\n", days/30);
    days = days%30;
    printf("no of days is %d\n", days);
    return 0;
}