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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL && l2 == NULL) return NULL;
        if(l1 == NULL && l2 != NULL) return l2;
        if(l1 != NULL && l2 == NULL) return l1;
        
        ListNode* result;
        
        if (l1->val <= l2->val) {
            result = l1;
            l1 = l1->next;
            result->next = mergeTwoLists(l1, l2); 
        } else {
            result = l2;
            l2 = l2->next;
            result->next = mergeTwoLists(l1, l2); 
        } 
        return result;
    }
};
