#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};
// Traversal
void traverse(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
//sum of all element
int sum(Node* head) {
    if (head == NULL) {
        return 0;
    }
    return head->data + sum(head->next);
}
//find no.of element

// int countNo(Node* head) {
//     int count = 0;

//     while (head != NULL) {
//         count++;
//         head = head->next;
//     }

//     return count;
// }
void deleteAtTail(Node* &head) {

    if(head == NULL)
        return;
    if(head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }
    Node* prev = NULL;
    Node* curr = head;
    while(curr->next != NULL) {
        prev = curr;
        curr = curr->next;
    }
    prev->next = NULL;
    delete curr;
}
void deleteAtHead(Node* &head) {

    if(head == NULL)
        return;

    Node* temp = head;

    head = head->next;

    delete temp;
}

int count(Node* head) {
    if (head == NULL)
        return 0;

    return 1 + count(head->next);
}
int main() {

    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    cout << "Linked List: ";
    traverse(head);
    cout << endl;
    cout <<sum(head);
    cout<<countNo(head);
    deleteAtHead(head);
    print(head);

    deleteAtTail(head);
    print(head);

    return 0;
}