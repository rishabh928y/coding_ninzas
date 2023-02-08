#include<iostream>
using namespace std;
struct Stack {
    char *arr;
    int top;
    int size;
};
void create_stack(Stack *stk, int s){
    stk -> arr = new char[s];
    stk -> top = -1;
    stk -> size = s;
}
bool isEmpty(Stack *stk){
    return stk -> top == -1;
}
bool isFull(Stack *stk){
    return stk -> top == (stk -> size) - 1;
}
void push(Stack *stk, char val){
    if(isFull(stk)){
        cout << "Overflown" << endl;
        return;
    }
    ++(stk -> top);
    stk -> arr[stk -> top] = val;
}

void pop(Stack *stk){
    if(isEmpty(stk)){
        cout << "Underflown" << endl;
        return;
    }
    --(stk -> top); 
}

char top(Stack *stk){
    if(isEmpty(stk)){
        return -1;
    }
    return stk -> arr[stk -> top];
}

bool isBalanced(string s){
    Stack* stk = new Stack;
    create_stack(stk,s.size());
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == '{'){
            push(stk,s[i]);
        }else if(s[i] == '}'){
            if(isEmpty(stk)){
                return false;
            }else if(top(stk) == '{'){
                pop(stk);
            }
        }
    }
    return isEmpty(stk);
}

int main(){
    do{
        string s;
        cout << "Enter a string: ";
        cin >> s;
        if(isBalanced(s)){
            cout << "The given string is Balanced!!" << endl;
        }else{
            cout << "The given string is unBalanced!!" << endl;
        }
        cout << "Do you want to continue? (y/n)" << endl;
        cout << "Enter choice: ";
        char ch;
        cin >> ch;
        if(ch == 'N' || ch == 'n'){
            cout << "Thank You!" << endl;
            break;
        }
    }while(1);
}
