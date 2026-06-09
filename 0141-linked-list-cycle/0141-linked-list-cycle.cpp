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
    bool hasCycle(ListNode *head) {
        if (head==nullptr || head->next==nullptr){
            return false;
            }
        struct ListNode* i=head;
        struct ListNode* j=head->next;
        while (j!=nullptr&&j->next!=NULL){
            if (i!=j) {
                i=i->next;
                j=j->next->next;
            } 
            else {
                return true;
            }
        }
        return false;
    }
};