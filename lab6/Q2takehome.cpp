

#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

struct node{
    int data;
    node* left;
    node* right;
    
    node(int value){
        data = value;
        left = right = nullptr;
    }
};

node* insertion(node* root, int value){
    if (root == nullptr) {
        return new node(value);
    }
    if (value < root->data) {
        root->left = insertion(root->left, value);
    } else {
        root->right = insertion(root->right, value);
    }
    return root;
}

node* lca(node* root, int v1, int v2) {
    if (root == nullptr) {
        return nullptr;
    }

    if (v1 < root->data && v2 < root->data) {
        return lca(root->left, v1, v2);
    }
    
    if (v1 > root->data && v2 > root->data) {
        return lca(root->right, v1, v2);
    }
    
    return root;
}

int main() {
    int noofint;
    cin >> noofint;
    vector<int> vecintegers(noofint);
    for (int i = 0; i < noofint; ++i) {
        cin >> vecintegers[i];
    }
    int v1, v2;
    cin >> v1 >> v2;
    node* root = nullptr;
    for (int value : vecintegers) {
        root = insertion(root, value);
    }
    node* ancestor = lca(root, v1, v2);
    if (ancestor != nullptr) {
        cout << ancestor->data << endl;
    }
    return 0;
}

