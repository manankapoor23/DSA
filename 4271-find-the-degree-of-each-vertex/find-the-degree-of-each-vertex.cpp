class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> ans(matrix[0].size(),0);
        for(int i =0;i<matrix[0].size();i++){
            for(int j=0;j<matrix[0].size();j++){
                ans[i]+=matrix[i][j];
            }
        }
        return ans;
        
    }
};