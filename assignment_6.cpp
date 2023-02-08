#include<iostream>
using namespace std;

class array_search
{
    int arr[100];

    public :

    void create_array(int n);
    void search_array(int n, int k);
};

void array_search :: create_array(int n)
{
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

}

void array_search :: search_array(int n, int k)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] == k)
        {
            cout << k << " found in the array " << endl;
        }
    }
}

int main(){
    array_search s1;
    int n, k;
    cout << "Enter no of elements in the array :- " << endl;
    cin >> n;

    cout << "Enter the element to be found :- " << endl;
    cin >> k;
    s1.create_array(n);
    s1.search_array(n, k);
    return 0;
}