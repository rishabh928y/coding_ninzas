#include<iostream>
#include<queue>
using namespace std;

void printDFS(int** edges, int n, int sv, bool* visited){
  cout << sv << endl;
  visited[sv] = true;
  for(int i=0; i<n; i++){
    if(i==sv){
      continue;
    }
    if(edges[sv][i]==1){
      if(visited[i]){
        continue;
      }
      printDFS(edges, n, i, visited);
    }
  }
}

void printBFS(int** edges, int n, int sv, bool* visited) {
    queue<int> pendingVertices;

    // bool * visited = new bool[n];
    // for(int i=0; i<n; i++) {
    //     visited[i] = false;
    // }

    pendingVertices.push(sv);
    visited[sv] = true;

    while(!pendingVertices.empty()) {
        int currentVertex = pendingVertices.front();
        cout << currentVertex << endl;
        pendingVertices.pop();

        for(int i=0; i<n; i++) {
            
            if(i == currentVertex) {
                continue;
            }

            if(edges[currentVertex][i] == 1 && !visited[i]) {
                   pendingVertices.push(i);
                   visited[i] = true;
            }

        }
    }

}

void DFS(int** edges, int n) {
  bool * visited = new bool[n];

  for(int i=0; i<n; i++) {
    visited[i] = false;
  }

  for(int i=0; i<n; i++) {
    if(!visited[i]){
       printDFS(edges, n, i, visited);
    }
  }
  delete [] visited;
}

void BFS(int** edges, int n) {
   bool * visited = new bool[n];

   for(int i=0; i<n; i++) {
    visited[i] = false;
   }

   for(int i=0; i<n; i++) {
    if(!visited[i]) {
        printBFS(edges, n, i, visited);
    }
   }
   delete [] visited;
}

int main() {
    
    int n;
    int e;
    cin >> n >> e;
    int** edges = new int*[n];
    for(int i=0; i<n; i++) {
        edges[i] = new int[n];
    for(int j=0; j<n; j++) {
        edges[i][j] = 0;
    }
    }

    for(int i=0; i<e; i++) {
        int f, s;
        cin >>f >> s;
        edges[f][s] = 1;
        edges[s][f] = 1;

    }

    // bool* visited = new bool[n];
    // for(int i=0; i<n; i++) {
    //     visited[i] = false;
    // }
 
    cout << "\nDFS" << endl;
    DFS(edges, n);
    cout << "\nBFS" << endl;
    BFS(edges, n);

    for(int i=0; i<n; i++) {
        delete [] edges[i];
    }

    delete [] edges;

}





#include <iostream>
#include <vector>
using namespace std;

vector<long long> getPath(bool **edges, long long v, bool *visited, long long v1, long long v2)
{
    vector<long long> path;
    if (v1 == v2)
    {
        path.push_back(v1);
        return path;
    }
    for (long long i = 0; i < v; i++)
    {
        if (i == v1)
            continue;
        if (visited[i])
            continue;
        if (edges[v1][i])
        {
            visited[i] = true;
            path = getPath(edges, v, visited, i, v2);
            if (path.size())
            {
                path.push_back(v1);
                return path;
            }
        }
    }
    return path;
}

int main()
{
    // Write your code here
    long long v, e;
    cin >> v >> e;
    bool **edges = new bool *[v];
    for (long long i = 0; i < v; i++)
    {
        edges[i] = new bool[v];
        for (long long j = 0; j < v; j++)
        {
            edges[i][j] = false;
        }
    }
    for (long long i = 0; i < e; i++)
    {
        long long start, end;
        cin >> start >> end;
        edges[start][end] = true;
        edges[end][start] = true;
    }
    bool *visited = new bool[v];
    for (long long i = 0; i < v; i++)
    {
        visited[i] = false;
    }
    long long v1, v2;
    cin >> v1 >> v2;
    visited[v1] = true;
    vector<long long> path = getPath(edges, v, visited, v1, v2);
    if (path.size())
    {
        for (long long i = 0; i < path.size(); i++)
        {
            cout << path[i] << " ";
        }
    }
    return 0;
}