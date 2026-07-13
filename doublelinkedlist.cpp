class Solution {
public:
    vector<vector<int>> displayList(Node *head) {
        vector<int> forward, backward;

        Node* temp = head;

        // Forward traversal
        while (temp != NULL) {
            forward.push_back(temp->data);

            // Stop at the last node
            if (temp->next == NULL)
                break;

            temp = temp->next;
        }

        // Backward traversal
        while (temp != NULL) {
            backward.push_back(temp->data);
            temp = temp->prev;
        }

        return {forward, backward};
    }
};