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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode temp(0);
        temp.next = head;

        ListNode* x = &temp;
        ListNode* y = &temp;

        for (int i = 0; i <= n; i++) {
            x = x->next;
        }

        while (x != nullptr) {
            x = x->next;
            y = y->next;
        }

        y->next = y->next->next;

        return temp.next;
    }
};