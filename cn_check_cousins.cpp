#include<iostream>
#include<queue>

using namespace std;

template<typename T>
class BinaryTreeNode {
    public :
    T data;
    BinaryTreeNode<int>* left;
    BinaryTreeNode<int>* right;

    BinaryTreeNode(T data) {
        
        this -> data = data;
        left = NULL;
        right = NULL;

    }
};

BinaryTreeNode<int>* takeInput() {
    int rootData;
    cout << "Enter root data : ";
    cin >> rootData;
    if(rootData  == -1){
        return NULL;
    }

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>* > q;
    q.push(root);

    while(!q.empty()){
        BinaryTreeNode<int>* currentNode = q.front();
        q.pop();
        
        int leftChild, rightChild;
        cout << "Enter left child of " << currentNode->data << " : "; 
        cin >> leftChild;
        cout << endl;
        if(leftChild != -1){
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cout << "Enter right child of " << currentNode->data << " : ";
        cin >> rightChild;
        cout << endl;
        if(rightChild != -1){
            BinaryTreeNode<int>* rightNode = new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);

        }

    }
      return root;
}

void printLevelAtNewLine(BinaryTreeNode<int>* root){
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        BinaryTreeNode<int>* first = q.front();
        q.pop();
        if(first == NULL){
            if(q.empty()){
                break;
            }
            cout << endl;
            q.push(NULL);
            continue;
        }
        cout << first->data << " ";
        if(first->left != NULL){
            q.push(first->left);
        }
        if(first->right != NULL){
            q.push(first->right);
        }
    }
}

bool isSibling(BinaryTreeNode<int>* root, int a, int b){

   if(root == NULL){
      return false;
    }

   if(root->left != NULL && root->right != NULL){
      return((root->left->data == a && root->right->data == b) || (root->left->data == b && root->right->data == a) || isSibling(root->left, a, b) || isSibling(root->right, a, b)); 
   }
   else{
      return false;
   }


}

int level(BinaryTreeNode<int>* root, int val, int lev){
    if(root == NULL){
      return 0;
    }

    if(root->data == val){
        return lev;
    }

    int l = level(root->left, val, lev+1);
    if(l != 0){
        return l;
    }

    return level(root->right, val, lev+1); 

}


bool isCousin(BinaryTreeNode<int>* root, int a, int b){

    if((level(root, a, 1) == level(root, b, 1)) && !(isSibling(root, a, b))){
        return true;
    }
    else{
        return false;
    }

}




int main(){
    BinaryTreeNode<int>* root = takeInput();
    int n1, n2;
    cin >> n1 >> n2;
    if(isCousin(root, n1, n2)) {
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
    
}