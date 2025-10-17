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
    pair<bool,int> isBalancedfast(TreeNode* root) {
        if(root==NULL){
            pair<bool,int> p = make_pair(true,0);
            return p ;
        }
        pair<int,int> left = isBalancedfast(root->left);
        pair<int,int> right = isBalancedfast(root->right);
        
        bool leftans = left.first;
        bool rightans = right.first;
        bool heighter = abs(left.second-right.second)<=1;
        pair<bool,int> ans;
        ans.second =max(left.second,right.second)+1;
        if(leftans&&rightans&&heighter){
            ans.first=true;
        }
        else{
            ans.first=false;
        }
        return ans;
    }
public:
    bool isBalanced(TreeNode*root){
        return isBalancedfast(root).first;

    }
};