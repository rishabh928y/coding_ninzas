#include<iostream>
using namespace std;

int conv(int f){
    int ans = (f-32)*(5.0/9);
    return ans;
}

int main(){
    int s, e, w;
    cin >> s >> e >> w;
    int i;
    
    while(s<=e){
        int cel = conv(s);
    cout << s << " " << cel << endl;
        s = s + w;
    }
    
}