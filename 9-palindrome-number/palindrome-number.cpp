class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        if(x>0 && x<10){
            return true;
        }
        int digit ;
        int org = x;
        long rev = 0 ;
        while(org>0){
            digit = org%10;
            if(rev>INT_MIN && rev<INT_MAX){
                rev = rev*10 + digit;
            }
            org = org/10;
        }
        return (x==rev);

    }
};