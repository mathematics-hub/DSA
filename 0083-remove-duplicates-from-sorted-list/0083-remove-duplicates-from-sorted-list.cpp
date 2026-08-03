/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *ahead = NULL, *atail = NULL;
        while (head) {
            if (ahead == NULL) {
                ahead = new ListNode(head->val);
                atail = ahead;
            } else {
                if (atail->val != head->val) {
                    atail->next = new ListNode(head->val);
                    atail = atail->next;
                }
            }
            head = head->next;
        }
        return ahead;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna