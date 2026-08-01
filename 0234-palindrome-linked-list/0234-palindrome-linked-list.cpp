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
        if (head == NULL) {
            return 0;
        }
        return ListSize(head->next) + 1;
    }
    ListNode* reverse(ListNode* cur, ListNode* pre) {
        if (cur == NULL) {
            return pre;
        }
        ListNode* temp = cur->next;
        cur->next = pre;
        return reverse(temp, cur);
    }
    bool isPalindrome(ListNode* head) {
        int size = ListSize(head);
        if (size == 0 || size == 1) {
            return true;
        }
        int pos = size / 2;
        ListNode *cur = head, *pre = NULL;
        for (int i = 1; i <= pos; i++) {
            pre = cur;
            cur = cur->next;
        }
        pre->next = NULL;
        ListNode* head1 = head;
        ListNode* head2 = reverse(cur, NULL);
        while (head1 && head2) {
            if (head1->val != head2->val) {
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna