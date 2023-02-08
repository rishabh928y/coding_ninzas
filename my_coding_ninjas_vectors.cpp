#include<iostream>
#include<vector>

using namespace std;

int main(){
    // vector<int> *vp = new vector<int>();
    vector<int> v;    

    for(int i=0; i < 100; i++)
    {
        cout << "Cap: " << v.capacity() << endl;
        cout << "Size: " << v.size() << endl;
        v.push_back(i+1);
    }

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    v[1] = 100;

    v.push_back(23);
    v.push_back(234);
    v.pop_back();
    
    return 0;
}