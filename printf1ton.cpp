#include<iostream>
using namespace std;

int main()
{
int t, size, *input;
cin>>t;
cin>>size;
for(int i = 0; i < size; i++){
    cin>>input[i];
}

int start = 0, end = size-1, arr[size];
    
    for(int i = 0; i < size; i++){
		if(input[i] == 0){
            arr[start] = 0;
            start++;
        }
        else{
			arr[end] = 1;
            end--;
        }
    }
    
    for(int i = 0; i < size; i++){
        cout<<arr[i];
    }

    for(int i = 0; i < size; i++){
        cout<<input[i];
    }

return 0;
}