#include <iostream>
#include <vector>
using namespace std;

class tree {
public:
    int val;
    vector<tree*> children;

    tree(int val) {
        this->val = val;
    }
};

void print(tree* root){  
    if (root == NULL)
        return;
    cout << root->val << " ";
    for(auto c: root->children){
        cout<<c->val<<" ";
    }
    cout<<endl;
    for(auto x: root->children){
        print(x);
    }
    }


int main() {

    tree* root = new tree(9);

    tree* n32 = new tree(32);
    tree* n16 = new tree(16);

    tree* n6 = new tree(6);
    tree* n3 = new tree(3);
    tree* n4 = new tree(4);
    tree* n5 = new tree(5);

    tree* n2 = new tree(2);

    tree* n3_2 = new tree(3);
    tree* n4_2 = new tree(4);

    root->children.push_back(n32);
    root->children.push_back(n16);

    n32->children.push_back(n6);
    n32->children.push_back(n3);
    n32->children.push_back(n4);
    n32->children.push_back(n5);

    n16->children.push_back(n2);
    n2->children.push_back(n3_2);
    n2->children.push_back(n4_2);
    print(root);

    return 0;
}