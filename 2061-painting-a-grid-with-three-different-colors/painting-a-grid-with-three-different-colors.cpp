class Solution {
public:
    vector<string> col_state;
    int M =1e9+7;
    vector<vector<int>> t;
    void make_col_states(string curr,char prevChar , int l,int m){
        if(l==m){
            col_state.push_back(curr);
            return;
        }
        for(char ch:{'R','G','B'}){
            if(ch==prevChar){
                continue;
            }
            make_col_states(curr+ch,ch,l+1,m);

        }


    }
    int solve(int rem_col,int prevIdx,int m){
        if(rem_col==0){
            return 1;

        }
        if(t[rem_col][prevIdx]!=-1){
            return t[rem_col][prevIdx];
        }
        int ways=0;
        string prevstate = col_state[prevIdx];
        for(int i =0;i<col_state.size();i++){
            if(i==prevIdx){
                continue;
            }
            string currState = col_state[i];
            bool valid = true;
            for(int j=0;j<m;j++){
                if(prevstate[j]==currState[j]){
                    valid = false;
                    break;
                }
            }
            if(valid){
                ways = (ways+solve(rem_col-1,i,m))%M;
            }

        }
        return t[rem_col][prevIdx]=ways;
    }
    int colorTheGrid(int m, int n) {
        make_col_states("",'#',0,m);
        int res =0;
        int total_states = col_state.size();
        t= vector<vector<int>>(n,vector<int>(total_states,-1));
        for(int i =0;i<col_state.size();i++){
            res= (res+solve(n-1,i,m))%M;

        }
        return res;
        
    }
};