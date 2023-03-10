// #include <iostream>
// #include <queue>
// #include"mytreenode1.h"
// using namespace std;

// TreeNode<int>* takeInpuLevelWise() {
//     int rootData;
//     cout << "Enter root data" << endl;
//     cin >> rootData;
//     TreeNode<int>* root = new TreeNode<int>(rootData);

//     queue<TreeNode<int>*> pendingNodes;

//     pendingNodes.push(root);
//     while(pendingNodes.size() != 0)
//     {
//         TreeNode<int>* front = pendingNodes.front();
//         pendingNodes.pop();
//         cout << "Enter num of children of " << front -> data << endl;
//         int numChild;
//         cin >> numChild;
//         for(int i=0; i<numChild; i++)
//         {
//             int childData;
//             cout << "Enter " << i << "th child of " << front -> data << endl;
//             cin >> childData;
//             TreeNode<int>*child = new TreeNode<int>(childData);
//             front->children.push_back(child);
//             pendingNodes.push(child);
//         }
//     }
//     return root;
// }

// TreeNode<int>* takeInput() {
//     int rootData;
//     cin >> "Enter data" << endl;
//     cin >> rootData;
//     TreeNode<int>* root = new TreeNode<int>(rootData);

//     int n;
//     cout << "Enter num of children of " << rootData << endl;
//     cin >> n;
//     for(int i=0; i<n; i++){
//         TreeNode<int>* child = takeInput();
//         root->children.push_back(child);
//     }
//     return root;
// }

// void printTee(TreeNode<int>* root)
// {
//     if(root == NULL){
//         return;
//     }

//     cout << root->data << ":";
//     for(int i=0; i<root->children.size(); i++)
//     {
//         cout << root ->children[i] -> data << ",";
//     }
//     cout << endl;
//     for(int i=0; i<root->children.size(); i++)
//     {
//         printTree(root->children[i]);
//     }
// }

// int main() {
//     TreeNode<int>* root = takeInputLevelWise();
//     printTree(root);
// }



#include<iostream>
#include<queue>
#include"myTreenode.h"
using namespace std;

TreeNode<int>* takeInputLevelWise() {
    int rootData;
    cout << "Enter root data " << endl;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;

    pendingNodes.push(root);
    while(pendingNodes.size() != 0)
    {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter number of children of " << front->data << endl;
        int numChild;
        cin >> numChild;
        for(int i=0; i<numChild; i++)
        {
            int childData;
            cout << "Enter " << i << "th child of " << front->data << endl;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;

}

TreeNode<int>* takeInput() {
    int rootData;
    cout << "Enter data " << endl;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    int n;
    cout << "Enter num of children of " << rootData << endl;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        TreeNode <int>* child = takeInput();
        root->children.push_back(child);
    }
    return root;
}

void printAtLevelK(TreeNode<int>* root, int k){
    if(root == NULL){
        return;
    }
    
    if(k==0){
        cout << root -> data << " ";
    }

    for(int i=0; i<root->children.size(); i++){
        printAtLevelK(root->children[i], k-1);
    }
}

void printTree(TreeNode<int>* root)
{
    if(root == NULL)
    {
        return;
    }

    cout << root -> data << ":";

    for(int i=0; i<root->children.size(); i++)
    {
        if(i == root->children.size()-1)
        {
            cout << root->children[i]->data;
            break;
        }
        cout << root->children[i]->data << ",";
    }

    cout << endl;

    for(int i=0; i<root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
}

int numNodes(TreeNode<int>* root)
{
    int ans = 1;
    for(int i=0; i < root->children.size(); i++){
       ans += numNodes(root -> children[i]);
    }
    return ans;
}

int main(){
    // TreeNode<int>* root = new TreeNode<int>(1);
    // TreeNode<int>*node1 = new TreeNode<int>(2);
    // TreeNode<int>*node2 = new TreeNode<int>(3);
    // root->children.push_back(node1);
    // root->children.push_back(node2);

    TreeNode<int>* root = takeInputLevelWise();
    int count = numNodes(root);
    cout << "Count = " << count << endl;
    printTree(root);
    
    printAtLevelK(root, 2);
}