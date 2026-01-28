class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        vector<pair<int,int>> v;
        for(int i =0;i<pairs.size();i++){
            pair<int,int> p = make_pair(pairs[i][0],pairs[i][1]);
            v.push_back(p);
        }

        //sorting the vector on basis of right
        sort(v.begin(), v.end(), [](auto &a, auto &b){
                    return a.second < b.second;
        });

        //now we have our sorted vector
        int count =1;
        int ans_end=v[0].second;
        for(int i=1;i<v.size();i++){
            if(v[i].first>ans_end){
                count++;
                ans_end=v[i].second;
            }
        }
        return count;
        
        
        
    }
};