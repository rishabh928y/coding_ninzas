#include<iostream>
using namespace std;

struct Stack {
    char *arr;
    int top;
    int size;
};

void create_stack(Stack *stk, int s) {
    stk -> arr = new char[s];
    stk -> top = -1;
    stk -> size = s;
}

bool isEmpty(Stack *stk) {
   return stk->top == -1;
}

bool isFull(Stack *stk) {
   return stk->top == (stk->size)-1;
}

void push(Stack *stk, char val) {
    if(isFull(stk)) {
        cout << "Overflown" << endl;
        return;
    }

    ++(stk->top);
    stk->arr[stk->top] = val;
}

void pop(Stack *stk) {
    if(isEmpty(stk)) {
        cout << "Underflown" << endl;
        return;
    }

    --(stk->top);

}

char top(Stack *stk) {
    if(isEmpty(stk)){
        return -1;
    }

    return stk->arr[stk->top];
}

bool isBalanced(string s) {
    Stack*stk = new Stack;
    create_stack(stk, s.size());
    for(int i=0; s[i] != '\0'; i++) {
        if(s[i] == '{') {
            push(stk, s[i]);
        }
        else if(s[i] == '}') {
            if(isEmpty(stk)) {
                return false;
            }
            else if(top(stk) == '{') {
                pop(stk);
            }
        }
    }
    return isEmpty(stk);
}

int main(){

    char ch;

    do{
    string s;
    cout << endl;
    cout << "Enter a string : "; 
    cin >> s;
    if(isBalanced(s)) {
        cout << "The given string is balanced!" << endl;
    }
    else{
        cout << "Oops! The given string is unbalanced!" << endl;
    }
    cout << "Wanna enter another string to check? (y/n)" << endl;
    cout << "y : to continue the program" << endl;
    cout << "n : to exit the program" << endl;
    cout << "Enter your choice: ";
    
    cin >> ch;
    if(ch == 'N' || ch == 'n') {
        cout << "Thank you" << endl;
        break;
    }
    }
    while(ch == 'y' || ch == 'Y');

}