#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool hasPath(vector<vector<char>> &board, int n, int m) {
  string s = "CODINGNINZAS";
  int k = s.length();

  int i=0,j=0;

  if(n==1) {
    for(int i=0; i<k; i++){
       if(board[0][i] == s[i]){ 
        if(i==k-1){
          return true;
        }
        else{
            continue;
        }
       
      }
      else{
        break;
      }
    }

    for(int i=0; i<k; i++){
       if(board[0][i] == s[k-1-i]){ 
        if(i==k-1){
          return true;
        }
        else{
            continue;
        }
       
      }
      else{
        break;
      }
    }

    return false;

  }
 
  for(int t=0; t<k; t++) {
    if(board[i][j] == s[t]){
      if(board[i+1][j+1] == s[t+1] && i+1<n && j+1 <m){
          i = i+1;
          j = j+1;
      }
      else if(board[i+1][j] == s[t+1] && i+1<n && j < m){
        i = i+1;
      }

      else if(board[i+1][j-1] == s[t+1] && i+1<n && j-1 < m) {
        i = i+1;
        j = j-1;
      }
      else if(board[i][j-1] == s[t+1] && i<n && j-1 < m) {
        j = j-1;
      }
      else if(board[i-1][j-1] == s[t+1] && i-1<n && j-1 < m) {
        i = i-1;
        j = j-1;
      }
      else if(board[i-1][j] == s[t+1] && i-1<n && j<m) {
        i = i-1;
      }
      else if(board[i-1][j+1] == s[t+1] && i-1 < n &&  j+1<m) {
        i = i-1;
        j = j+1;
      }
      else if(board[i][j+1] == s[t+1] && i<n && j+1 <m){
        j = j+1;
      }
      else{
        return false;
      }
    }
    else{
      if(j+1<m){
        j=j+1;
      }
      else if(j+1>=m) {
        i=i+1;
        j=0;
      }

       }   //else neds



  }    //for loop ends

  return true;

}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<char>> board(n, vector<char>(m));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> board[i][j];
        }
    }

    cout << (hasPath(board, n, m) ? 1 : 0);
}