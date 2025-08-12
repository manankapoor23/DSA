class Solution {
public:
    int mySqrt(int x) {
        long long int s = 0;
        long long int e = x ;
        long long int  mid = s+(e-s)/2;
        long long int ans ;
        while(s<=e){
            mid = s+(e-s)/2;
            long long int square = mid*mid;
            if(square>x){
                e = mid-1;
            }
            if(square<x){
                s = mid+1;
                ans = mid ;
            }
            if(square==x){
                return mid;
            }
            
        }
        return ans;
    }
};