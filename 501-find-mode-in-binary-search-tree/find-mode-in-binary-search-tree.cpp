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
    unordered_map<int,int> ump;
    int maxx= 0;
    void dfs(TreeNode* root){
        if(root==NULL){
            return;
        }
        ump[root->val]++;
        maxx = max(ump[root->val],maxx);
        dfs(root->left);
        dfs(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        dfs(root);
        for(auto x:ump){
            if(x.second==maxx){
                ans.push_back(x.first);
            }
        }
        return ans;
        
    }
};