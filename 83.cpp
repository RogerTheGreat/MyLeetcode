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
    ListNode* deleteDuplicates(ListNode* head) {
        int value;
        if (head == NULL) {
            return NULL;
        }
        ListNode* p = head;
        value = p->val;
        while (p->next != NULL) {
            if (p->next->val == value) {
                p->next = p->next->next;
            } else {
                value = p->next->val;
                p = p->next;
            }
            
        }
        return head;
    }
};
