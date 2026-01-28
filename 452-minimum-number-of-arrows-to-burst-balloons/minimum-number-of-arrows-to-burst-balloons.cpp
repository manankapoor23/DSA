class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        // make the pair vector 
        vector<pair<int,int>> v;
        for(int i=0;i<points.size();i++){
            pair<int,int> p = make_pair(points[i][0],points[i][1]);
            v.push_back(p);
        }
        //sort this vector on basis of end
        sort(v.begin(),v.end(),[](auto &a,auto &b){
            return a.second<b.second;
        });
        int count =1;
        int ans_end = v[0].second;
        for(int i =1;i<v.size();i++){
            if(v[i].first>ans_end){
                count++;
                ans_end = v[i].second;
            }
        }
        return count;
    }
};