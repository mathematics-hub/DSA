/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* headcopy = new Node(0);
        Node* tailcopy = headcopy;
        Node* temp = head;
        while (temp) {
            tailcopy->next = new Node(temp->val);
            tailcopy = tailcopy->next;
            temp = temp->next;
        }
        Node* ptr = headcopy;
        headcopy = headcopy->next;
        delete ptr;

        temp = head;
        tailcopy = headcopy;
        unordered_map<Node*, Node*> store;
        while (temp) {
            store[temp] = tailcopy;
            temp = temp->next;
            tailcopy = tailcopy->next;
        }

        temp = head;
        tailcopy = headcopy;
        while (temp) {
            tailcopy->random = store[temp->random];
            tailcopy = tailcopy->next;
            temp = temp->next;
        }
        return headcopy;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna