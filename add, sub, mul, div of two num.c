#include<stdio.h>

int main(){
    float num1, num2, num3;
    printf("Enter the value of num1 is :-");
    scanf("%f", &num1);
    printf("Enter the value of num2 is :-");
    scanf("%f", &num2);
    num3 = num1 + num2;
    printf("The value of num1 + num2 is %f\n", num3);
    num3 = num1 - num2;
    printf("The value of num1 - num2 is %f\n", num3);
    num3 = num1 * num2;
    printf("The value of num1 * num2 is %f\n", num3);
    num3 = num1 / num2;
    printf("The value of num1/num2 is %f\n", num3);
    num3 = (int)num1 % (int)num2;
    printf("Value of num1 % num2 is %f\n", num3);
    return 0;
}