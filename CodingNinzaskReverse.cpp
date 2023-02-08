#include <iostream>
// using namespace std;

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


using namespace std;
// #include "solution.h"

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

Node *reverseLinkedListRec(Node *head)
{

    if(head == NULL || head -> next == NULL)
    {
        return head;
    }

    Node *smallans = reverseLinkedListRec(head -> next);

    Node *tail = head -> next;
    tail -> next = head;
    head -> next = NULL;
    return smallans;
}

Node *kReverse(Node *head, int k)
{
    if(head == NULL || head -> next == NULL)
    {
        return head;
    }

    if(k==0 || k==1)
    {
        return head;
    }

    Node *head1 = head;
    Node *tail1 = head;
    int count = 1;

    while(count != k && tail1 -> next != NULL)
    {
        tail1 = tail1 -> next;
        count++;
    }

    Node *head2 = tail1 -> next;
    tail1 -> next = NULL;

    head1 = reverseLinkedListRec(head1);
    tail1 = head1;

    while(tail1 -> next != NULL)
    {
        tail1 = tail1 -> next;
    }

    head2 = kReverse(head2, k);
    tail1 -> next = head2;

    return head1;
}


void print(Node *head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;

    while(t--)
    {
        Node *head = takeinput();
        int k;
        cin >> k;
        head = kReverse(head, k);
        print(head);
    }

    return 0;
}


