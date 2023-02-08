template <typename T>
class TreeNode {
    TreeNode<T>** children;
    int childCount;
        int maxChildCount;
    public:
        T data;
        TreeNode(T data) {
            this->data = data;
            childCount = 0;
            children = new TreeNode<T>*[10];
            maxChildCount = 10;
        }
        int numChildren() {
            return childCount;
        }
        void addChild(TreeNode<T>* child) {
            children[childCount] = child;
            childCount++;
            if(childCount == maxChildCount) {
                TreeNode<T>** childrenNew = new TreeNode<T>*[2*maxChildCount];
                for(int i = 0; i < maxChildCount; i++) {
                    childrenNew[i] = children[i];
                 }
                 maxChildCount *= 2;
                    children = childrenNew;
            }
        }
        TreeNode<T>* getChild(int index) {
            return children[index];
        }
        void setChild(int index, TreeNode<T>* child) {
            children[index] = child;
        }
    void removeChild(int i) {
        for(int j = i + 1; j < childCount; j++) {
            children[j - 1] = children[j];
        }
        childCount--;
    }
};

#include <iostream>
#include<queue>
using namespace std;

TreeNode<int>* takeInputLevelWise() {
    queue<TreeNode<int>*> q;
    int rootData;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);
    q.push(root);
    while (!q.empty()) {
        TreeNode<int>* frontNode = q.front();
        int numChildren;
        cin >> numChildren;
        for (int i = 0; i < numChildren; i++) {
            int childData;
            cin >> childData;
            TreeNode<int>* childNode = new TreeNode<int>(childData);
            q.push(childNode);
            frontNode->addChild(childNode);
        }
    }
    return root;
}
void printLevelATNewLine(TreeNode<int> *root) {
    if(root == NULL) {
        return;
    }
    queue<TreeNode<int>*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()) {
        TreeNode<int> *first = q.front();
        if(first == NULL) {
            if(q.empty()) {
                break;
            }
            cout << endl;
            q.push(NULL);
            continue;
        }
        cout << first -> data << " ";
        for(int i = 0; i < first -> numChildren(); i++) {
            q.push(first -> getChild(i));
        }
    }
}

TreeNode<int> *removeLeafNodes(TreeNode<int>* root){
    if(root == NULL){
        return NULL;
    }

    if(root->numChildren() == 0){
        delete root;
        return NULL;
    }

    for(int i=0; i < root->numChildren(); i++){
        TreeNode<int> *child = root->getChild(i);
        if(child->numChildren() == 0){
            delete child;
            root->removeChild(i);
            i--;
        }
    }

    for(int i=0; i < root->numChildren(); i++){
    removeLeafNodes(root->getChild(i));
    return root;
    }

}



int main() {
    TreeNode<int>* root = takeInputLevelWise();
    root = removeLeafNodes(root);
    printLevelATNewLine(root);
}

