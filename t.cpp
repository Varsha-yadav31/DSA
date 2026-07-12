#include <iostream>
using namespace std;

class Tree {
public:
    int data;
    Tree* left;
    Tree* right;

    Tree(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Preorder Traversal
void preorder(Tree* root) {
    if (root == NULL)
        return;

    cout << root->data << " ";

    preorder(root->left);
    preorder(root->right);
}

int main() {

    // Root Node
    Tree* root = new Tree(5);

    // Left and Right Child of Root
    root->left = new Tree(7);
    root->right = new Tree(17);

    // Left Subtree
    root->left->left = new Tree(3);

    root->left->left->left = new Tree(13);
    root->left->left->right = new Tree(15);

    // Right Subtree
    root->right->left = new Tree(6);
    root->right->right = new Tree(20);

    root->right->left->left = new Tree(12);

    root->right->right->right = new Tree(19);

    // Print Tree
    cout << "Preorder : ";
    preorder(root);

    return 0;
}