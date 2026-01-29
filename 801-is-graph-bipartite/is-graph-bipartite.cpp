class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        queue<int> q;
        int N = graph.size();
        vector<int> colour(N, -1);
        for(int i =0;i<N;i++){
            if(colour[i]==-1){
                q.push(i);
                colour[i]=0; // means visited

                while(!q.empty()){
                    int node = q.front();
                    q.pop();
                    for(auto it:graph[node]){
                        if(colour[it]==-1){
                            colour[it]=!colour[node];
                            q.push(it);
                        }
                        else if(colour[it]==colour[node]){
                            return false;
                        }
                    }
                }
            }

        }
        return true;

        
    }
};