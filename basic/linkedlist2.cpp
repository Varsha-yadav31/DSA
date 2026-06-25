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

int main() {

    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    cout << "Linked List: ";
    traverse(head);
    cout << endl;
    cout <<sum(head);

    return 0;
}