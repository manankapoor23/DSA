class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0){
            return true;
        }
        for(int i=0;i<flowerbed.size();i++){
            // the idea. was to assume outsides as 0 
            // and then take left current and rigth, if all 0 place atr currentn, bcs currennt is between em
            int left = (i == 0) ? 0 : flowerbed[i-1];
            int right = (i == flowerbed.size()-1) ? 0 : flowerbed[i+1]; 
            int current = flowerbed[i];
            if(left ==0 && right==0 && current==0){
                n--;
                flowerbed[i]=1;
                if(n==0){
                    return true;
                }
            }
        }
        return false;
        
    }
};