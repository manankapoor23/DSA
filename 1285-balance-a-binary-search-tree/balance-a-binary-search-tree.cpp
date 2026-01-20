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
    void inorder(TreeNode* root , vector<int> &ans){
        if(root==NULL){
            return;
        }
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
private:
    TreeNode* InorderToBst(int s , int e , vector<int> ans ){
        if(s>e){
            return NULL;
        }
        int mid = s+(e-s)/2;
        TreeNode* root = new TreeNode(ans[mid]);
        root->left = InorderToBst(s,mid-1,ans);
        root->right = InorderToBst(mid+1,e,ans);
        return root;
    }
public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> ans ;
        inorder(root,ans);
        // now our vector has the sorted 
        // find the middle value from the inorder 
        // make a new root with that and assign the middle value to it and then recursively call root->left to be inorderbst of left part of mid which is s to mid-1 , with carrying the ans array and similarly for the right part 
        return InorderToBst(0,ans.size()-1,ans);
        

        
    }
};