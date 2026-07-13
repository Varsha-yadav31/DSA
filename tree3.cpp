#include<iostream>
using namespace std;
class Tree{
    int val;
    vector<Tree*>child ;
    Tree(int val){
        this.val= val;
    }
};
int main(){
    Tree*  root = new Tree(9);
    Tree*c1= new Tree(32);
    Tree*c2= new Tree(16);
    

    root->child.push_back(c1);
    root->child.push_back(c2);
    root->child.push_back(c3);
    root->child.push_back(c4);

    Tree* d1 = new Tree(3);
    Tree*d2 = new Tree(4);
    Tree*d2 = new Tree(5);
    c1->child.push_back(d1);
    

    Tree* d2 = new Tree();
    Tree* d3 = new Tree(4);


    c1->child.push_back(d2);
    c1->child.push_back(d3);
    
    Tree* d4 = new Tree(12);
    c3->child.push_back(d4);
    Tree* e1 = new Tree(7);
    





}
