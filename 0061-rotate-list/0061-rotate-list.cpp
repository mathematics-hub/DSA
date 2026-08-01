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
    int ListSize(ListNode* head) {
        if (head == NULL)
            return 0;
        return ListSize(head->next) + 1;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        int size = ListSize(head);
        if (size == 0 || size == 1) {
            return head;
        }
        k = k % size;
        if (k == 0) {
            return head;
        }
        int pos = size - k;
        ListNode *cur = head, *pre = NULL;
        for (int i = 1; i <= pos; i++) {
            pre = cur;
            cur = cur->next;
        }
        pre->next = NULL;
        ListNode* temp = cur;
        while (cur->next != NULL) {
            cur = cur->next;
        }
        cur->next = head;
        head = temp;
        return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna