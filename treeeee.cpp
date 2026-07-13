#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class tree {
public:
    int val;
    vector<tree*> children;

    tree(int val) {
        this->val = val;
    }
};

// Preorder Traversal
void preorder(tree* root) {
    if (root == NULL)
        return;

    cout << root->val << " ";

    for (tree* child : root->children) {
        preorder(child);
    }
}

// Postorder Traversal
void postorder(tree* root) {
    if (root == NULL)
        return;

    for (tree* child : root->children) {
        postorder(child);
    }

    cout << root->val << " ";
}

// Level Order Traversal
void levelOrder(tree* root) {
    if (root == NULL)
        return;

    queue<tree*> q;
    q.push(root);

    while (!q.empty()) {
        tree* curr = q.front();
        q.pop();

        cout << curr->val << " ";

        for (tree* child : curr->children) {
            q.push(child);
        }
    }
}

int main() {

    // Tree Structure
    //
    //          1
    //      /   |   \
    //     2    3    4
    //   /  \        |
    //  5    6       7
    //

    tree* root = new tree(1);

    tree* n2 = new tree(2);
    tree* n3 = new tree(3);
    tree* n4 = new tree(4);
    tree* n5 = new tree(5);
    tree* n6 = new tree(6);
    tree* n7 = new tree(7);

    root->children.push_back(n2);
    root->children.push_back(n3);
    root->children.push_back(n4);

    n2->children.push_back(n5);
    n2->children.push_back(n6);

    n4->children.push_back(n7);

    cout << "Preorder : ";
    preorder(root);

    cout << "\nPostorder : ";
    postorder(root);

    cout << "\nLevel Order : ";
    levelOrder(root);

    cout << endl;

    return 0;
}