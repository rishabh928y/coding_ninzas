#include<stdio.h>

void selectionSort(char input[]) {
for(int i = 0; input[i] != '\0'; i++ ) {
// Find min element in the array
int min = input[i], minIndex = i;
for(int j = i+1; j !='\0'; j++) {
if(input[j] < min) {
min = input[j];
minIndex = j;
}
}
// Swap
int temp = input[i];
input[i] = input[minIndex];
input[minIndex] = temp;
}
}


int main() {
char input = "Hello";


selectionSort(input);

for(int i = 0; input[i] != '\0'; i++) {
printf("%d ", input[i]);
}

return 0;
}

