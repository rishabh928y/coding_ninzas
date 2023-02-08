#include<iostream>
using namespace std;

// const m =50;

class ITEMS
{
    int itemCode[10];
    int itemPrice[10];
    int count;

    public :
    void CNT(void)
    {
        count =0;
    }

    void getitem(void);
    void displaySum(void);
    void remove(void);
    void displayItems(void);
};

void ITEMS :: getitem(void)
{
    cout << "Enter item code :";
    cin >> itemCode[count];
    cout << "Enter item price :";
    cin >> itemPrice[count];
    count++;
}

void ITEMS :: displaySum(void)
{
    float sum = 0;
    for(int i=0; i < count; i++)
    {
        sum = sum + itemPrice[i];
    }
    cout << "\nTotal value :" << sum << "\n";
}

void ITEMS :: remove(void)
{
    int a;
    cout << "Enter item code :";
    cin >> a;

    for(int i=0; i<count; i++)
    {
        if(itemCode[i] == a)
        itemPrice[i] = 0;
    } 
}

void ITEMS :: displayItems(void)
{
    cout << "\nCode  Price\n";

    for(int i=0; i<count; i++)
    {
        cout << "\n" << itemCode[i];
        cout << "  " << itemPrice[i];
    }
    cout << "\n";
}

int main(){
    ITEMS order;
    order.CNT();
    int x;

    do
    {
       cout << "\nYou can do the following";
       cout << "\nEnter appropriate number \n";
       cout << "\nn1 : Add an item ";
       cout << "\nn2 : Display total value";
       cout << "\nn3 : Delete an item";
       cout << "\nn4 : Display all items";
       cout << "\nn5 : Quit";
       cout << "\n\nWhat is your option ?\n";
       cin >> x;

       switch(x)
       {
        case 1 : order.getitem(); break;
        case 2 : order.displaySum(); break;
        case 3 : order.remove(); break;
        case 4 : order.displayItems(); break;
        case 5 : break;
        default : cout << "Error in input; try again\n";
       }

    } while(x != 5);
    return 0;
}