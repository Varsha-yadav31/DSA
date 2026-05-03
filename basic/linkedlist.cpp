//#include <bits/stdc++.h>
#include<iostream>
using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int val = 0, Node* add = NULL) {
//         data = val;
//         next = add;
//     }
// };
// void print(Node* head) {
//     Node* temp = Head;
//         while (temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//         }

//     }
// int main() {
//     int n = 5;
//     vector<int> arr = {1, 2, 30, 4, 5};

//     Node* Head = NULL;
//     Node* Tail = NULL;

//     for (int i = 0; i < n; i++) {
//         Node* newNode = new Node(arr[i]);

//         if (Head == NULL) {
//             Head = Tail = newNode;
//         } else{
//             Tail->next = newNode;
//             Tail = newNode;
//         }
        
//     return 0;
// }
// }



struct node{
    int data;
    node *next;

}
void Ptint(node* n){
    while(n! ==NULL){
        cout<<n->data<<endl;
        n = n->next;
    }

}
int main(){
    node *head = new node();
    node *second = new node();
    node *third = new node();

    head -> data = 5;
    head -> next = second;
    second -> data = 2;
    second -> next = third;
    third->data = 4;
    third->next = NULL;
    print(head);

}




















