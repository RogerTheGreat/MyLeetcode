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
        if (head == NULL) {
            return false;
        }
 
        ListNode* p = head;
        ListNode* q = head;
        
        bool start = true;
        
        while (p != NULL && q != NULL) {
            if (q->next == NULL) {
                return false;
            }
            
            else if (!start && p->val == q->val) {
                return true;
            }
            
            p = p->next;
            q = q->next->next;
            start = false;
        }
        
        return false;
    }
};
