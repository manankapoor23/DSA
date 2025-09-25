class Solution {
public:
    bool isPalindrome(int x) {
        int rev = 0 ;
        int digit ;
        int org = x;
        if(x<0){
            return false;
        }
        while(x>0){
            digit = x%10;
            if(rev>INT_MAX/10 || rev<INT_MIN/10){
                return false;
            }
            rev = rev*10+digit;
            x=x/10;
        }
        return (org==rev);
        
    }
};