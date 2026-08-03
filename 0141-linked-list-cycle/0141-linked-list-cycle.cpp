/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool checked(vector<ListNode*> visited, ListNode* curr) {
        for (auto val : visited) {
            if (val == curr) {
                return true;
            }
        }
        return false;
    }
    bool hasCycle(ListNode* head) {
        ListNode* curr = head;
        vector<ListNode*> visited;
        while (curr != NULL) {
            if (checked(visited, curr)) {
                return true;
            }
            visited.push_back(curr);
            curr = curr->next;
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna