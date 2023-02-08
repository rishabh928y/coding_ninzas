// #include <iostream>
// #include<queue>

// using namespace std;

// void BFS(int** edges, int n, int sv, bool* visited, queue<int> q) {

// for(int i=0; i<n; i++) {
    
//     if(i==sv) {
//         continue;
//     }

//     if(edges[sv][i] == 1){
//         if(visited[i]) {
//             continue;
//         }
     
//       q.push(i);
//       visited[sv] = true;
//     }
// }

// cout << q.front() << " ";
// q.pop();

// if(q.front() != NULL){
//     BFS(edges, n, q.front(), visited, q);
// }

// }

// int main() {

// queue<int> q;

// int n, e;
// cin >> n >> e;

// int** edges = new int*[n];
// for(int i=0; i<n; i++) {
//     edges[i] = new int[n];
//     for(int j=0; j<n; j++) {
//         edges[i][j] = 0;
//     }
// }

// for(int i=0; i<e; i++) {
//     int f, s;
//     cin >> f >> s;
//     edges[f][s] = 1;
//     edges[s][f] = 1;

// }

// bool* visited = new bool[n];

// for(int i=0; i<n; i++) {
//     visited[i] = false;
// }

// q.push(0);

// if(e != 0){
//     BFS(edges, n, 0, visited, q);
// }
// else{
//     for(int i=0; i<n; i++) {
//        cout << i << " ";
//     }

// }


// return 0;
 
// }

#include <iostream>
#include<queue>

using namespace std;

void BFS(int** edges, int n, int sv, bool* visited, queue<int> q) {

for(int i=0; i<n; i++) {
    
    if(i==sv) {
        continue;
    }

    if(edges[sv][i] == 1){
        if(visited[i]) {
            continue;
        }
     
      q.push(i);
      visited[sv] = true;
    }
}

cout << q.front() << " ";
q.pop();

if(!q.empty()){
    BFS(edges, n, q.front(), visited, q);
}

}

int main() {

queue<int> q;

int n, e;
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
    cin >> f >> s;
    edges[f][s] = 1;
    edges[s][f] = 1;

}

bool* visited = new bool[n];

for(int i=0; i<n; i++) {
    visited[i] = false;
}

q.push(0);

if(e != 0){
    BFS(edges, n, 0, visited, q);
}
else{
    for(int i=0; i<n; i++) {
       cout << i << " ";
    }

}

return 0;
 
}

