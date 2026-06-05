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
    ListNode* deleteMiddle(ListNode* head) {
      if (head==NULL||head->next==NULL){return NULL;}  
      struct ListNode* x=head;
      struct ListNode* y=head;
      struct ListNode* prev;
      while (y!=NULL && y->next!=NULL){
        prev=x;
        x=x->next;
        y=y->next->next;
      }
      prev->next=x->next;
      return head;
    }
};