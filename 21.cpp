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
        int i = 0;
        int j = 0;
        ListNode* p = l1;
        ListNode* q = l2;
        ListNode* head = new ListNode(0);
        ListNode* tmp = head;
        
        while (l1 != NULL && l2 != NULL) {
            if (l1->val > l2->val) {
                head->next = l2;
                l2 = l2->next;
            } else {
                head->next = l1;
                l1 = l1->next;
            }
            head = head->next;
        }
        
        if (l1 == NULL) {
            head->next = l2;
        } else if (l2 == NULL) {
            head->next = l1;
        }
        
        return tmp->next;
    }
};
