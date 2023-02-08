#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter the numbers" << endl;

     cin >> a >> b;

     if(a==b){
         cout << "Hey these are equal" << endl;
     }
     else{
         if(a<b){
             cout << "a is small" << endl;
         }
         else{
             cout << "a is large" << endl;
         }
     }
    return 0;
}