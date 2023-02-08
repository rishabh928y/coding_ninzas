// #include<iostream>
// using namespace std;

// int Firstocc(int input[], int size, int x, int c){
//     if(size==0){
//         return -1;
//     }

//     if(input[0] == x){
//         return 0+c;
//     }

//     Firstocc(input+1, size-1, x, c+1);

// }
// int main(){
//     int n;
//     cin >>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int x;
//     cin >>x;
//     cout << Firstocc(arr, n, x, 0)<<endl;
//     return 0;
// }

                    //   OR

#include<iostream>
using namespace std;

int Firstocc(int input[], int size, int i, int x){
    if(i==size){
        return -1;
    }

    if(input[i]==x){
        return i;
    }

    return Firstocc(input, size, i+1, x);

}
int main(){
    int n;
    cin >>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int x;
    cin >>x;
    cout << Firstocc(arr, n, 0, x)<<endl;
    return 0;
}
