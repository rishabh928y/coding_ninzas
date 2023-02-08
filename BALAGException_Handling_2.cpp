// Throw point outside the try block
#include<iostream>
using namespace std;

void divide(int x, int y, int z) {
    cout << "\nWe are inside the function \n";
    if((x-y) != 0) {
        int R = z/(x-y);
        cout << "Result = " << R << "\n";
    }
    else 
    {
        throw(x-y);
    }

}

int main(){
    try
    {
        cout << "We are inside the try block \n";
        divide(10, 20, 30);   // Invoke divide()
        divide(10, 10, 20);   // Invoke divide()

    }    
    catch(int i)
    {
        cout << "caught the exception \n";
    }
    return 0;
}