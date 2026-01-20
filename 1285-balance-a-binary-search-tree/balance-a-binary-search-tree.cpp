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
    void inorder(TreeNode* root , vector<TreeNode*> &ans){
        if(!root){
            return;
        }
        inorder(root->left,ans);
        ans.push_back(root);
        inorder(root->right,ans);
    }
private:
    TreeNode* InorderToBst(vector<TreeNode*> ans ,int s , int e ){
        if(s>e){
            return nullptr;
        }
        int mid = s+(e-s)/2;
        ans[mid]->left = InorderToBst(ans,s,mid-1);
        ans[mid]->right = InorderToBst(ans,mid+1,e);
        return ans[mid];
    }
public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<TreeNode*> ans ;
        inorder(root,ans);
        // now our vector has the sorted 
        // find the middle value from the inorder 
        // make a new root with that and assign the middle value to it and then recursively call root->left to be inorderbst of left part of mid which is s to mid-1 , with carrying the ans array and similarly for the right part 
        return InorderToBst(ans,0,ans.size()-1);
        
    }
};