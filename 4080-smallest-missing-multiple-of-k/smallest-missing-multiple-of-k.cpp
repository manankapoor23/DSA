class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        // while loop lagega while n in array return n = 2n and if not return us next 2n 
        // warna straigtup return n
        int n=k;
        while(true){
            bool found = false;
            for(int x:nums){
                if(x==n){
                    found = true;
                    break;
                }
            }
            if(!found){
                return n;
            }
            n+=k;
        }

        
    }
};