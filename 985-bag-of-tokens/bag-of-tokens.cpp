class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int max_token = 0 ;
        if(tokens.size()==1&&power<tokens[0]){
            max_token =0;
            return max_token;
        }
        int score = 0;
        sort(tokens.begin(),tokens.end());
        int ptr1 = 0;
        int ptr2 = tokens.size()-1;
        for(int i=0;ptr1<=ptr2;i++){
            if(tokens[ptr1]<=power){
                max_token+=1; // score = 1
                power = power-tokens[ptr1]; // 200-100 = 100
                ptr1++;
            }
            else if(score>=1){
                max_token = max_token-1;
                power = power+tokens[ptr2];
                ptr2--;
            }
            else{
                break;
            }
            score = max(score,max_token);

        }
        return score;

    }
};