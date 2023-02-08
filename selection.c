#include<stdio.h>
#include<string.h>
void selectionsort(char *arr){
    for(int i=0;arr[i+1]!='\0';i++){
        int min=i;
        for(int j=i+1;arr[j]!='\0';j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(arr[min]<arr[i]){
            char temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }
        // printf("\n%s",arr);
    }
}
int main(){
    char str[20];
    printf("Enter the string: ");
    scanf("%s",&str);
    selectionsort(str);
    printf("\nSorted string is:\n%s",str);
}