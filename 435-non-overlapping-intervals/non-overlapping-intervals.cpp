class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        vector<pair<int,int>> v;
        for(int i =0;i<intervals.size();i++){
            pair<int,int> p = make_pair(intervals[i][0],intervals[i][1]);
            v.push_back(p);
        }
        sort(v.begin(),v.end(),[](auto &a,auto &b){
            return a.second<b.second;
        });
        int tot_int = intervals.size()-1;
        int count =0;
        int ans_end=v[0].second;
        for(int i =1;i<v.size();i++){
            if(ans_end<=v[i].first){
                count++;
                ans_end=v[i].second;
            }
        }
        return tot_int-count;
    }
};