#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

int min(int *brr, int*arr, int size, unordered_map<int, int> &mp){
    int mx = 0;
    int k = brr[0];
    
    for(int i=0; i<size; i++) {
        if(brr[i] < k && mp[arr[i]] == 0) {
            k = brr[i];
            mx = i;
        }
    }
    return mx;
}

int main() {
	int t;
	cin >> t;
	while(t!=0) {
	    t--;
	    int a=0;
	    int ans=0;
	    unordered_map<int, int> mp;

	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    int brr[n];
	    
	    for(int i=0; i<n; i++) {
	        cin >> arr[i];
	    }
	    for(int i=0; i<n; i++) {
	        cin >> brr[i];
	    }

        for(int i=0; i<n; i++) {
            mp[arr[i]]=0;
        }
	    
	    for(int i=0; i<k; i++) {
	        // for(int i=0; i<n; i++) {
	            a = min(brr, arr, n, mp);
                mp[arr[a]]++;
	            ans+=brr[a];
                brr[a] = INT_MAX;
	        // }
	    }
	    cout << ans <<endl;
	}
	return 0;
}


