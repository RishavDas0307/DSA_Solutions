class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (head==nullptr){return NULL;}
        struct ListNode dummy;
        dummy.next=head;
        struct ListNode* curr=head;
        struct ListNode* prev=&dummy;
        while (curr){
            if (curr->val != val) {
                prev=curr;
                curr=curr->next;
            }
            else if (curr->val==val){
                if (curr->next)
                {
                    prev->next=curr->next;
                    curr=curr->next;
                } else {
                    prev->next = nullptr;
                    break;
                }
            }
        }
        return dummy.next;
    }
};