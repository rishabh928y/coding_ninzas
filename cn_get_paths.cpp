#include<iostream>
#include<vector>
using namespace std;

vector<long long> getPath(int** edges, long long n, bool* visited, long long start, long long end) {

    vector<long long> path;
    visited[start] = true;

    if(start == end) {
      path.push_back(start);
      return path;
    }

    for(int i=0; i<n; i++) {
        if(i == start) {
            continue;
        }
        

        if(edges[start][i] == 1) {
             if(visited[i]) {
             continue;
             }
            path = getPath(edges, n, visited, i, end);
            if(path.size()) {
                path.push_back(start);
                return path;
            }
        }
    }

    return path;

}

int main() {

   long long n, e;
   cin >> n >> e;

   int** edges = new int*[n];
   for(int i=0; i<n; i++) {
    edges[i] = new int[n];
    for(int j=0; j<n; j++) {
        edges[i][j] = 0;
    } 
   }

   for(long long i=0; i<e; i++) {
    int f, s;
    cin >> f >> s;
    edges[f][s] = 1;
    edges[s][f] = 1;
   }

   bool* visited = new bool[n];
   for(long long i=0; i<n; i++) {
    visited[i] = false;
   }

   long long start, end;
   cin >> start >> end;

   vector<long long>path = getPath(edges, n, visited, start, end);
   if(path.size()) {

    for(long long i=0; i<path.size(); i++) {
        cout << path[i] << " ";
    }
   }

   return 0;

}



