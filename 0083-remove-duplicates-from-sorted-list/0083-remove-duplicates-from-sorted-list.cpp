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
        if (head==nullptr) {return NULL;}
        struct ListNode* i=head;
        struct ListNode* j=head;
        while (j){
            if (i->val==j->val){
                j=j->next;
                continue;
            } else {
                i->next=j;
                i=j;
                j=j->next;
            }
        }
        i->next=nullptr;
        return head;
    }
};