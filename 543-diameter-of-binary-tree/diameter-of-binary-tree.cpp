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
        int height(TreeNode* root){
            if(root==NULL){
                return 0 ;
            }
            int h = 1+max(height(root->left),height(root->right));
            return h;
        }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0 ;
        }

        int diaR = diameterOfBinaryTree(root->right);
        int diaL=diameterOfBinaryTree(root->left);
        int diaC = height(root->left)+height(root->right);
        int dia = max(diaR,max(diaL,diaC));
        return dia;
        
    }
};