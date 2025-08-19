class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> seen(nums.begin(),nums.end());
        int n = nums.size();
        vector<int> res={};
        for(int i =1;i<=n;i++){
            if(seen.find(i)==seen.end()){
                res.push_back(i);
            }
        }

        
        return res;
    }
};