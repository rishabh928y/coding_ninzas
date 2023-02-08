#include<iostream>
using namespace std;

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int i, num, *ptr;
    ptr = arr;

    cout << "Enter the number to be searched : ";
    cin >> num;

    for(i=0; i<10; i++){
        if(*ptr == num){
            cout << "\n" << num << " is present in the array";
            break;
        }
        else if(i==9){
            cout << "\n" << num << " is not prsent in the array";
        }
        ptr++;
    }

    return 0;
}