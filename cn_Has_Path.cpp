#include<iostream>
using namespace std;

bool hasPath(int** edges, int start, int end, bool* visited, int n) {
    visited[start] = true;

    for(int i=0; i<n; i++) {
        if(i==start) {
            continue;
        }
        if(edges[start][i] == 1) {
            if(visited[i]) {
                continue;
            }

            if(i==end) {
                return true;
            }

            else{
               return hasPath(edges, i, end, visited, n);
            }
            
        }
    }

    return false;
}

int main(){
    
    int n;
    int e;
    cin >> n >> e;
    int** edges = new int*[n];
    for(int i=0; i<n ; i++) {
        edges[i] = new int[n];
        for(int j=0; j<n; j++) {
            edges[i][j] = 0;
        }
    }

    for(int i=0; i<e; i++) {
        int f, s;
        cin >> f >> s;
        edges[f][s] = 1;
        edges[s][f] = 1;

    }

    bool* visited = new bool[n];
    for(int i=0; i<n; i++) {
        visited[i] = false;
    }

    int st, end;
    cin >> st >> end;

    if(hasPath(edges, st, end, visited, n)) {
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }

    for(int i=0; i<n; i++) {
        delete [] edges[i];
    }

    delete [] edges;

}