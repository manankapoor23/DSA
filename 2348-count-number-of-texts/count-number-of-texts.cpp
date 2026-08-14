class Solution {
public:
    const int MOD = 1e9 + 7;
    long long solve(int i, string &s,vector<long long> &memo){
        int n = s.size();
        if(i==s.size()){
            return 1;
        }
        if(memo[i]!=-1){
            return memo[i];
        }

        // taking a single digit 
        long long ans = solve(i+1,s,memo);
        //but for more digits like 2,3,4 and 4 when the number is 7 or 9
        int limit = (s[i]=='7'||s[i]=='9')?4:3;
        for(int j = i+1;j<min(i+limit,n);j++){
            // if i+1th not equal to ith that means diff grp
            if(s[j]!=s[i]){
                break;
            }
            ans = (ans + solve(j + 1, s, memo)) % MOD;
        }
        memo[i]=ans;
        return ans;

    }
    int countTexts(string pressedKeys) {
        vector<long long> memo(pressedKeys.size()+1,-1);
        int ans =0;
        ans = (ans + solve(0, pressedKeys, memo)) % MOD;
        return ans;
        
    }
};