#include <iostream>
using namespace std;

bool issaferow(int sudoku[9][9],int row,int col,int n)
{
    for(int i=0;i<9;i++)
    {
        if(sudoku[row][i]==n)
            return false;
    }
    return true;
}

bool issafecol(int sudoku[9][9],int row,int col,int n)
{
    for(int i=0;i<9;i++)
    {
        if(sudoku[i][col]==n)
            return false;
    }
    return true;
}

bool issafematrix(int sudoku[9][9],int row,int col,int n)
{
    int rowmetric=row-row%3;
    int colmetric=col-col%3;
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(sudoku[i+rowmetric][j+colmetric]==n)
                return false;
        }
    }

      return true;
}

bool issafe(int sudoku[9][9],int row,int col,int n)
{
    return issaferow(sudoku,row,col,n) && issafecol(sudoku,row,col,n) && issafematrix(sudoku,row,col,n);
}

bool findemptylocation(int sudoku[9][9],int &row,int &col)
{
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(sudoku[i][j]==0)
            {
                row=i;
                col=j;
                return true;
            }
        }
    }
    return false;
}


bool solvesudoku(int sudoku[9][9])
{
    int row,col;
    if(!findemptylocation(sudoku,row,col))
        return true;
    
    for(int i=1;i<=9;i++)
   {
      if(issafe(sudoku,row,col,i))
     {

     sudoku[row][col]=i;    
        if(solvesudoku(sudoku))
             return true;  
       sudoku[row][col]=0; 
      }    
    }
    return false;
}
int main(){
    int sudoku[9][9];
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
          cin>>sudoku[i][j];  
        }
    }
    
     bool ans=solvesudoku(sudoku);
    
    cout << endl;
    
     for(int i=0;i<9;i++)
     {
         for(int j=0;j<9;j++)
         {
             cout<<sudoku[i][j]<<" ";
         }
         cout<<endl;
     }
       
}