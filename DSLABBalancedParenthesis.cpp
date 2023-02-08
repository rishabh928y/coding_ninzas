#include<iostream>
#include<stack>
using namespace std;

bool isBalanced(string expression){
    stack<char> s;
    for(int i=0; expression[i] != '\0'; i++){
        if(expression[i] == '(')
        {
            s.push(expression[i]);
        }

        if(s.empty() && expression[i] == ')')
        {
            return false;
        }
      
        if(expression[i] == ')')
        {
            if(s.top() == '('){
                s.pop();
            }
            else{
                return false;
            }
        }
    }
     
    if(s.empty())
    {
        return true;
    }
    else
    {
        return false;
    } 

}

int main(){
    string input;
    cin >> input;
    
    if(isBalanced(input)){
        cout << "True";
    }
    else{
        cout << "False";
    }
    
    return 0;
}