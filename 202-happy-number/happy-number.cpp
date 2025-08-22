class Solution {
public:
    bool isHappy(int n) {
        int count =0;
        while(n!=1&&count<1000){
            int sum = 0 ;
            while(n>0){
                int dig = n%10;
                sum+=dig*dig;
                n=n/10;
        }
        n = sum;
        count++;

        }

        return n==1;

    }
};