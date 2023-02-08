#include<iostream>
using namespace std;

class compare{ 
    int a, b, c; 
    
    public : 

    void give_values(){
        cout << "Enter 1st number: " << endl;
        cin >> a;
        cout << "Enter 2nd number: " << endl;
        cin >> b;
        cout << "Enter 3rd number: " << endl;
        cin >> c;
    }

    void give_result(){
        if(a>b)
        {
            if(a>c){
                cout << a << " is the greatest of three numbers ";
            }
            else{
                cout << c << " is the greatest of three numbers ";
            }
        }       
        
        else
        {
            if(b>c){
                cout << b << " is the greatest of three numbers ";
            }
            else{
                cout << c << " is the greatest of three numbers ";
            }
        }
    }
};

int main(){
    compare x;
    x.give_values();
    x.give_result();
    return 0;
}