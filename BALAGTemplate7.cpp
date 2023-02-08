#include<iostream>
using namespace std;

#define ARR_MAX 5

template<class T>

T find_min(T ARR[]) {
    int i=0; 
    T MIN = ARR[0];
    for(int i =0; i<ARR_MAX; i++) {
        if(ARR[i] < MIN){
            MIN = ARR[i];
        }
    }
    return(MIN);
    }

int main(){
    int I_MIN;
    float F_MIN;
    char C_MIN;

    int I[5] = {20, 4, 2, 38, 97};
    float F[5] = {-9.9, 12.2, 3.1, 9.9, 8.9};
    char C[5] = {'a', 'A', '/', '4', '~'};

    I_MIN = find_min(I);
    F_MIN = find_min(F);
    C_MIN = find_min(C);

    cout << "Minimum value in integer array = " << I_MIN << endl;
    cout << "Minimum value in float array = " << F_MIN << endl;
    cout << "Minimum value (as per ASCII) in char array = " << C_MIN << endl;

    return 0;
}