class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int,int> mpp;
        vector<int> ans = {};
        for(int i :nums){
            if(mpp[i]==1){
                ans.push_back(i);
            }
            mpp[i]=1;
        }
        return ans;
        
    }
};