/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    private:
        TreeNode* inverse(TreeNode* root){
            if(root==NULL){
                return NULL;
            }
            TreeNode* temp = root->right;
            root->right=root->left;
            root->left=temp;

            inverse(root->left);
            inverse(root->right);

            return root;
        }
    private:
        bool same(TreeNode* p , TreeNode* q){
            if(p==NULL||q==NULL){
                return (p==q);
            }
            return (p->val==q->val)&&same(p->left,q->left)&&same(p->right,q->right);
        }
    private:
        TreeNode* clone(TreeNode* root) {
    if (!root) return NULL;
    TreeNode* node = new TreeNode(root->val);
    node->left = clone(root->left);
    node->right = clone(root->right);
    return node;
}
public:
    bool isSymmetric(TreeNode* root) {
        TreeNode* root2 = inverse(clone(root));
        return (same(root,root2));

    }
};