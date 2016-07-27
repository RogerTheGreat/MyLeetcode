/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* pos = root;
        TreeNode* tmp;
        if (p->val > q->val) {
            tmp = p;
            p = q;
            q = tmp;
        }
        
        while (1) {
            // pos in the middle
            if (pos->val > p->val && pos->val < q->val) {
                return pos;
            } else if (pos->val < p->val && pos->val < q->val) {
                pos = pos->right;
            } else if (pos->val > p->val && pos->val > q->val) {
                pos = pos->left;
            } else if (pos->val == p->val || pos->val == q->val) {
                return pos;
            }
        }
        
        return pos;
    }
};
