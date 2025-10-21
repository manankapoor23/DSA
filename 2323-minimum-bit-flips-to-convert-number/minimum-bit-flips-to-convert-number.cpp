class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count = 0 ;
        int xorred = start^goal;
        if(xorred>INT_MIN && xorred < INT_MAX){
            while(xorred>0){
                if(xorred&1){
                    count++;
                }
                xorred=xorred>>1;
            }
        }
        return count;
        
    }
};