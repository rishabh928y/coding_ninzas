#include<stdio.h>

void selectionSort(char input[]) {
for(int i = 0; input[i] != '\0'; i++ ) {
// Find min element in the array
int min = input[i], minIndex = i;
for(int j = i+1; input[j] !='\0'; j++) {
if(input[j] < min) {
min = input[j];
minIndex = j;

}
}

// Swap
char temp = input[i];
input[i] = input[minIndex];
input[minIndex] = temp;
}
}


int main() {
char input[100];

for(int i=0; i<10; i++){
scanf("%d", &input[i]);
}

selectionSort(input);

for(int i = 0; input[i] != '\0'; i++) {
printf("%d ", input[i]);
}

return 0;
}

