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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA->next==nullptr && headB->next==nullptr && headA==headB){
            return headA;
        }
       ListNode* a=headA;
       ListNode* b=headB;
       unordered_map<ListNode*, int> np;
       while (a!=nullptr){
            np[a]=a->val;
            a=a->next;
       }
       while (b!=nullptr){
        if (np.find(b)!=np.end()){
            return b;
        }
        b=b->next;
       }
       return 0; 
    }
};