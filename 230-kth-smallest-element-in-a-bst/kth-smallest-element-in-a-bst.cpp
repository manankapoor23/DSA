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
    vector<int> storer;
    void inorder(TreeNode* root){
        if(root==NULL){
            return;
        }
        inorder(root->left);
        storer.push_back(root->val);
        inorder(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        // to find the smallest in a BST we used to go to the min(root->left) while root->left !=NULL
        // in this we can either keep storing the root->left and then out of the iterate three times to 
        // inorder traversal
        inorder(root);
        return storer[k-1];

    }
};