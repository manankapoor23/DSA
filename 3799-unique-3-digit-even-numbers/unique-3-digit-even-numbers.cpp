class Solution {
public:
    vector<int> chukk;
    
    void solve(vector<int> &digits, int n, int num,vector<bool> &used){
        bool digiter[10]={};
        if(n==0){
            if(num%2==0){
                chukk.push_back(num);
            }
            return;
        }
        for(int i =0;i<digits.size();i++){
            if(used[i]){
                continue;
            }
            if(n==3 && digits[i]==0){
                continue;
            }
            if(digiter[digits[i]]){
                continue;
            }
            digiter[digits[i]]=true;

            used[i]=true;
            // but if false then process it 
            solve(digits,n-1,num*10+digits[i],used);
            used[i]=false;
        }
    }
    int totalNumbers(vector<int>& digits) {
        vector<bool> used(digits.size(),false);
        solve(digits,3,0,used);
        return chukk.size();
    }
};