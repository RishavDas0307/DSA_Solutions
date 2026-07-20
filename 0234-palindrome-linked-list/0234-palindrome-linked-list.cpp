class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head->next;
        while (fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* prev=nullptr;
        ListNode* curr=slow->next;
        while (curr!=nullptr) {
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        while (prev!=nullptr) {
            if (prev->val != head->val) {return false;}
            prev=prev->next;
            head=head->next;
        }
        return true;
    }
};