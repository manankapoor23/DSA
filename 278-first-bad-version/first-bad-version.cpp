// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int s = 1 ;
        int e =n;
        int mid = s+(e-s)/2;
        int ans = -1;
        while(s<=e){
            mid = s+(e-s)/2;
            if(isBadVersion(mid)==true){
                ans = mid;
                e = mid-1;

            }
            else if(isBadVersion(mid-1)==false){
                s =mid+1;
            }
            if(isBadVersion(mid)==true){
                ans = mid;
            }

        }
        return ans;
        
    }
};