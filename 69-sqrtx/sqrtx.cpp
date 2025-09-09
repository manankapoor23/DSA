class Solution {
public:
    int mySqrt(int x) {
        int mid ;
        int s = 0 ;
        int e = x ;
        long long int square ;
        long long ans ;
        while(s<=e){
            long long mid = s+(e-s)/2;
            square = mid*mid;
            if(square==x){
                return mid;
            }
            else if(square<x){
                s = mid+1;
                ans = mid;
                

            }
            else{
                e = mid-1;
            }
        }
        return ans;
    }
};