#include<iostream>
using namespace std;

class Node
{
    public : 
    int data;
    Node *next;
    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};

Node *takeinput()
{
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while(data != -1)
    {
        Node *newnode = new Node(data);
        if(head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail -> next = newnode;
            tail = newnode;
        }
        cin >> data;
    }
    return head;
}

Node *reverse(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *futr;

    while(curr != NULL)
    {
        futr = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = futr;
    }
    return prev;
}

Node *addOneUtil(Node *head)
{
    Node* res = head;
    Node *temp;

    int carry = 1, sum;

    while(head != NULL)
    {
        sum = carry + head -> data;
        carry = sum/10;
        sum = sum % 10;
        head -> data = sum;
        temp = head;
        head = head -> next;
    }

    if(carry > 0)
    {
        Node *newnode = new Node(carry);
        temp -> next = newnode;
    }
    return res;
}

Node* addOne(Node *head)
{
    head = reverse(head);

    head = addOneUtil(head);

    return reverse(head);
}

void printList(Node *node)
{
    // Node *temp = head;
    while(node != NULL)
    {
        cout << node -> data;
        node = node -> next;
    }
    cout << endl;
}

int main(void)
{
    Node *head = takeinput();
    printList(head);

    head = addOne(head);

    cout <<"\nResultant List is ";
    printList(head);

    return 0;
}