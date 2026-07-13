#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

static int idx = -1;

// Build Tree from Preorder
Node* buildTree(vector<int> preorder) {
    idx++;

    if (preorder[idx] == -1) {
        return NULL;
    }

    Node* root = new Node(preorder[idx]);

    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
}

// Preorder Traversal
void preorder(Node* root) {
    if (root == NULL)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Inorder Traversal
void inorder(Node* root) {
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Postorder Traversal
void postOrder(Node* root) {
    if (root == NULL)
        return;

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

// Level Order Traversal
void levelOrder(Node* root) {
    if (root == NULL)
        return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {

        Node* curr = q.front();
        q.pop();

        cout << curr->data << " ";

        if (curr->left != NULL)
            q.push(curr->left);

        if (curr->right != NULL)
            q.push(curr->right);
    }
}

int main() {

    vector<int> preorderArr = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = buildTree(preorderArr);

    cout << "Preorder : ";
    preorder(root);
    cout << endl;

    cout << "Inorder : ";
    inorder(root);
    cout << endl;

    cout << "Postorder : ";
    postOrder(root);
    cout << endl;

    cout << "Level Order : ";
    levelOrder(root);
    cout << endl;

    return 0;
}