class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int bestDiv = divisors[0];
        int maxscore = 0 ;
        for(int div :divisors){
            int count = 0 ;
            for(int num :nums){
                if(num%div==0){
                    count++;
                }
            }
            if(count>maxscore){
                maxscore = count;
                bestDiv = div;
            }
            else if(count==maxscore && bestDiv>div){
                bestDiv = div;
            }
        }
        return bestDiv;
        
    }
};