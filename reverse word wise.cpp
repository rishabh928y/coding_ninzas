#include <iostream>
using namespace std;
void reverseStringWordWise(char input[]) {
    
       int count =0;
        for(int i=0; input[i] != '\0'; i++){
            count++;
        }
    
    int k=count-1;
   
    for(int i=0; i<(count-1)/2; i++){
         int temp = input[i];
        input[i] = input[k];
        input[k] = temp;
        k--;
    }
    
    int j=0;
    int s, e;
    
    while(j<count){
        
    s=j;
        
    for(j=s; j != ' ' || j != '\0'; j++){
        
        
    }
    
    e=j;
        
      int z=0;    
    
     for(z=s; z<(s+e)/2 - 1; z++){
     int swap = input[s];
     input[s] = input[e-1];
     input[e-1] = swap;
     e--;
    }
        
   input[j] = ' ';
        j++;


    }
       
    
}

int main() {
	// your code goes here
	char s[10]="yash verm";
	reverseStringWordWise(s);
	for(int i=0;i<10;i++){
	    cout<<s[i];
	}
	return 0;
}