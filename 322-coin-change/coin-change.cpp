class Solution {
public:
    // state is solve(x) which means min coins needed to achieve amount x
    int const max = 1e9;
    int solve(vector<int> &coins, int x,vector<int> &memo){
        int mini;
        //base case 
        if(x==0){
            return 0;
        }
        if(x<0){
            // this means we overshot
            return INT_MAX;

        }
        if(memo[x]!=-1){
            // if state has already been calculated we return it 
            return memo[x];
        }
        int ans = INT_MAX;
        for(int coin:coins){
            if(x-coin>=0){
                // use coin
                int result = solve(coins,x-coin,memo);
                // if result possible 
                if(result!=INT_MAX){
                    ans=min(ans,1+result);
                }
            }
        }
        memo[x]=ans;
        return ans;

    }
    int coinChange(vector<int>& coins, int amount){
        vector<int> memo(amount+1,-1);
        int ans = solve(coins,amount,memo);
        if(ans==INT_MAX){
            return -1;
        }
        return ans;

        
    }
};