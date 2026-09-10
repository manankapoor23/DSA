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
public:
    int sum =0;
    int size =0;
    int ans =0;
    pair<int,int> dfs(TreeNode* node){
        if(node==NULL){
            return {0,0};
        }
        pair<int,int> left = dfs(node->left);
        pair<int,int> right = dfs(node->right);
        // process current node 
        sum = left.first+right.first+node->val;
        size=left.second+right.second+1;
        if((int)sum/size==node->val){
            ans++;
        }
        return {sum,size};

    }
    int averageOfSubtree(TreeNode* root) {
        dfs(root);
        return ans;
        
    }
};