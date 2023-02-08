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
      else{
        tail -> next = newnode;
        tail = newnode;
      }
      cin >> data;
   }
   return head;
}

void deleteAlt(Node *head)
{
    if(head == NULL)
    {
        return;
    }

    Node *prev = head;
    Node *futr = head -> next;

    while(prev != NULL && futr != NULL)
    {
        prev -> next = futr -> next;
        delete(futr);
        prev = prev -> next;
        if(prev != NULL)
        {
            futr = prev -> next;
        }
    }
}


void printList(Node *node)
{
    while(node != NULL)
    {
        cout << node -> data;
        node = node -> next;
    }
    cout << endl;
}


int main(){
    Node *head = takeinput();
    printList(head);

    deleteAlt(head);

    cout << "Resultant list is : ";
    printList(head); 
    return 0;
}