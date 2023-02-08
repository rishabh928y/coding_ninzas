#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int i=0;
    char *ptr[10] = {
        "books",
        "television",
        "computer",
        "sports"
    };

    char str[25];
    cout << "\n\n\nEnter your favourite leisure pursuit: ";
    cin >> str;
    for(i=0; i<4; i++){
        if(!strcmp(str, *ptr[i])){
           cout << "\n\nYour favourite pursuit " << "is available here " << endl;
           break;
        }
    }

    if(i==4){
        cout << "\n\nYour favourite " << "not available here" << endl;
    }
    return 0;
}