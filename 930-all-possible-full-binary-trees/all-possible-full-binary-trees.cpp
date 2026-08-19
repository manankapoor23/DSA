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
    vector<TreeNode*> solve(int n){
        if(n%2==0){
            // means n is even and with even number of nodes no full binary tree can be constructed hence 
            return {};
        }
        if(n==1){
            // we only have a single node which means that we have one full binary tree right?? right yes
            // make a treenode and return it only 
            TreeNode* root = new TreeNode(0);
            return {root};
        }
        // if n is there like 7, hence possible cases begin with
        //  left is 1 and then right 5 , hence right = n-1-left (7-1-1)
        // left goes from 1..3..5...n-2
        vector<TreeNode*> leftTrees;
        vector<TreeNode*> rightTrees;
        vector<TreeNode*> result;

        for(int left = 1;left<n;left+=2){
            int right = n-1-left;
            leftTrees = solve(left);
            rightTrees = solve(right);
            for(auto l:leftTrees){
                for(auto r: rightTrees){
                    TreeNode* root = new TreeNode(0);
                    root->left =l;
                    root->right =r;
                    result.push_back(root);
                }
            }
        }
        return result;

    }
    vector<TreeNode*> allPossibleFBT(int n) {
        vector<TreeNode*> ans = solve(n);
        return ans;
        
    }
};