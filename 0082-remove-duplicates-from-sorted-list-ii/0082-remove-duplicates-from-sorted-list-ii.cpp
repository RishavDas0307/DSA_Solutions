class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head==nullptr) {return NULL;}
        struct ListNode dummy;
        dummy.next=head;
        struct ListNode* curr=head;
        struct ListNode* prev=&dummy;
        while (curr){
            if (curr->next && curr->val==curr->next->val){
                while (curr->next && curr->val==curr->next->val){
                    curr->next=curr->next->next;
                }
                prev->next=curr->next;
                curr=curr->next;
            }
            else {
                prev=curr;
                curr=curr->next;
            }
        }
        return dummy.next;
    }
};