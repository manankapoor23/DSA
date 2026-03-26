class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        int n = nums.size();
        int q = queries.size();

        // use unordered map 
        unordered_map<int,vector<int>>mp;
        for(int i =0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        
        vector<int> ans;
        // element not found in the array hence returing -1
        if((mp.find(x)==mp.end())){
           vector<int> ret(q,-1);
           return ret;
        }
        vector<int> pos = mp[x]; // gives 0,2 , pos size = 2 
        // now we have mp.first as the element , and mp.second as its occurences 
        for(int i =0;i<q;i++){
            if(queries[i]>pos.size()){
                ans.push_back(-1);
            }
            else{
                ans.push_back(pos[queries[i]-1]);
            }
        }
        return ans;

    }
};