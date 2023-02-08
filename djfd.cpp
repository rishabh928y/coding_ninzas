#include <stack>
int countBracketReversals(char input[]){
	
    int len = input.length();
    
    if(len ==0)
    {
        return 0;
    }
    
    if(len%2 != 0)
    {
        return -1;
    }
    
    stack<char> s;
    
    int countreversal = 0;
    
    for(int i=0; input[i] != '\0'; i++)
    {
        if(s.empty())
    {
        s.push(input[i]);
    }
    
    else
    {
        if(input[i] == '{')
        {
            s.push(input[i]);
        }
        
        else if(input[i] == '}' && !s.empty())
        {
            if(s.top() == '{')
            {
                s.pop();
            }
            
            else
            {
                s.push(input[i]);
            }
        }
        
        else
        {
            s.push(input[i]);
        }
        
    }
        
    }
    
    int count=0;
    while(!s.empty())
    {
        char c1 = s.top();
        s.pop();
        char c2 = s.top();
        s.pop();
        
        if(c1 == c2)
        {
            count++;
        }
        
        else
        {
            count+=2;
        }
    }
    return count;
    
    else{
      return -1;  
    } 
}




#include <stack>
int countBracketReversals(string input) {
    stack<char> st;
	int l = input.length();
	int count;
	if(l % 2 == 0){
		for(int i = 0; input[i] != '\0'; i++){
			if(input[i] == '{')
				st.push(input[i]);
			else if(input[i] == '}' && !st.empty()){
				if(st.top() == '{')	st.pop();
				else st.push(input[i]);
			}
			else st.push(input[i]);	
		}
		count = 0;
		while(!st.empty()){
			char c1 = st.top();
			st.pop();
			char c2 = st.top();
			st.pop();
			if(c1 == c2)
				count++;
			else
				count += 2;
		}
		return count;
	}
    else{
		return -1;
	}
}

