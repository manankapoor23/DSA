class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int jewelCount =0;
        for(char s:stones){
            for(char j:jewels){
                if(s==j){
                    jewelCount++;
                }
            }
        }
        return jewelCount;

        
    }
};