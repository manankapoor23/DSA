class Solution {
public:
    int minBitFlips(int start, int goal) {
        int xorred = start^goal;
        int count = 0 ;
        if(xorred<INT_MAX && xorred>INT_MIN){
            while(xorred>0){
                if(xorred&1){
                    count++;
                }
                xorred = xorred>>1;
            }
        }
        return count;
    }
};