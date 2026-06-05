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
    ListNode* middleNode(ListNode* head) {
        struct ListNode* x=head;
        struct ListNode* y=head;
        while(y->next!=NULL && y->next->next!=NULL){
            x=x->next;
            y=y->next->next;
        }
        if(y->next!=NULL){return x->next;}
        return x;
    }
};