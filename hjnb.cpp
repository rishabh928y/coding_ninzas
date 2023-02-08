#include <iostream>
using namespace std;

int main() {
	
	    int n, m, k, z, r, max=0;
	    scanf("%d %d", &n, &m);
	    int a[n];
	    int i=1, j=1;
	    for(i=1; i<=n; i++){
	        scanf("%d", &a[i]);
	    }
	    for(i=1; i<=n; i++){
	        for(j=i; j<=n; j++){
	            if(a[i]>=a[j]){
	                k = a[i] + a[j];
	                z = a[i] - a[j];
	                r = z%m;
	            }
	            else{
	                k = a[i] + a[j];
	                z = a[i] - a[j];
	                r = (z+m)%m;
	                }
	                if((k+r)>=max){
	                    max = (k+r);
	                }
	        }
	    }
	    printf("%d\n", max);
	return 0;
}
