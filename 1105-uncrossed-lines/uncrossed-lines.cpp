class Solution {
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<vector<int>> t(n+1,vector<int>(m+1,0));
        for(int i =0;i<=n;i++){
            t[i][0]=0;
        }

        for(int i =1;i<=n;i++){
            for(int j =1;j<=m;j++){
                // if match
                if(nums1[i-1]==nums2[j-1]){
                    t[i][j]=1+t[i-1][j-1];
                }
                else{
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        return t[n][m];
        
    }
};