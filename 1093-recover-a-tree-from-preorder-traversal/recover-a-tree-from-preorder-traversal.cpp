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
    TreeNode* recoverFromPreorder(string traversal) {
        vector<pair<int,int>> p;
        int i =0;
        while(i<traversal.size()){
            int depth =0;
            while(i<traversal.size()&&traversal[i]=='-'){
                depth =depth+1;
                i++;
            }
            int value = 0;
            while(i<traversal.size()&&isdigit(traversal[i])){
                value = value*10+(traversal[i]-'0');
                i++;
            }
            p.push_back({depth,value});
        }
        stack<TreeNode*> st;
        for(auto &it:p){
            int depth = it.first; // 0
            int value = it.second; // 1
            TreeNode* node = new TreeNode(value);
            
            // current depth = 0 and st.size is 0 so we wont get here
            while(st.size()>depth){
                st.pop();

            }
            if(!st.empty()){
                if(!st.top()->left){
                    st.top()->left = node;
                }
                else{
                    st.top()->right = node;
                }
            }
            // now we have a stack ready of the nodes 
            st.push(node);
        }
        while(st.size()>1){
            st.pop();
        }
        return st.top();
        
        
    }
};