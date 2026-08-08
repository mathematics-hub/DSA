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
    void merge(Node* head1, Node* head2) {
        while (head2) {
            Node* ptr1 = head1->next;
            Node* ptr2 = head2->next;
            head2->next = head1->next;
            head1->next = head2;
            head1 = ptr1;
            head2 = ptr2;
        }
    }
    Node* copyRandomList(Node* head) {
        if (head == NULL) {
            return NULL;
        }
        // Step 1: Create copy list
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

        // Step 2: merge original and copied nodes
        temp = head;
        tailcopy = headcopy;
        merge(temp, tailcopy);

        // Step 3: Assign random pointers
        temp = head;
        while (temp) {
            Node* copy = temp->next;
            if (temp->random)
                copy->random = temp->random->next;
            else
                copy->random = NULL;
            temp = copy->next;
        }

        // Step 4: Separate the two lists
        temp = head;
        headcopy = head->next;
        while (temp) {
            Node* copy = temp->next;
            temp->next = copy->next;
            if (copy->next)
                copy->next = copy->next->next;
            temp = temp->next;
        }
        return headcopy;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna