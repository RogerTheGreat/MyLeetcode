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
    ListNode* reverseList(ListNode* head) {
        if (head == NULL) {
            return NULL;
        }
        if (head->next == NULL) {
            return head;
        }
        
        ListNode* p = head->next;
        head->next = NULL;
        if (p->next == NULL) {
            p->next = head;
            return p;
        }
        
        ListNode* q = p->next;
        p->next = head;
        while (1) {
            ListNode* tmp = q->next;
            q->next = p;
            p = q;
            
            if (tmp == NULL) {
                return q;
            } else {
                q = tmp;
            }
        }
        
        return q;
    }
};
