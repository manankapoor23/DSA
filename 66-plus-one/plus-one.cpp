class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // start from the right 
        int n = digits.size();
        for(int i =n-1;i>=0;i--){
            int dig = digits[i];
            if(dig<9){
                digits[i]+=1;
                return digits;
            }
            digits[i]=0;
        }

        // if all 9;
        // take size and make new array with size+1 , insert 1 at beginning and others 0
        vector<int> mota(n+1,0);
        mota[0]=1;
        return mota;




        
        
    }
};