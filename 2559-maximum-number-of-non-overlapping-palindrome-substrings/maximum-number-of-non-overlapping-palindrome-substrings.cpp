class Solution {
public:
    bool isPal(string &s, int i,int j){
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
            
        }
        return true;
    }
    int solve(string &s, int i, int j,int k,vector<vector<int>> &dp){
        if(i>s.size() || j >s.size()){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }


        if(isPal(s,i,j)){
            int take = 1+solve(s,j+1,j+k,k,dp);
            int grow = solve(s,i,j+1,k,dp);
            int slide = solve(s,i+1,j+1,k,dp);
            return dp[i][j]=max(max(take,grow),slide);
        }
        int grow = solve(s,i,j+1,k,dp);
        int slide = solve(s,i+1,j+1,k,dp);
        return dp[i][j]=max(grow,slide);
    }
    int maxPalindromes(string s, int k) {
        if(k==1){
            return s.size();
        }
        vector<vector<int>> dp(s.size()+1,vector<int>(s.size()+1,-1));
        int ans = solve(s,0,k-1,k,dp);
        return ans;
    }
};