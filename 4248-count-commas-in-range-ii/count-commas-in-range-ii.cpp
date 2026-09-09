class Solution {
public:
    long long countCommas(long long n) {
        if(n<=999){
            return 0;
        }
        if(n<=100000){
            return n-999;
        }
        long long lower = 1000;
        long long comma =1;
        long long upper;
        long long count;
        long long res=0;
        while(lower<=n){
            upper=lower*1000-1;
            if(upper>n){
                upper=n;
            }
            count = upper-lower+1;
            res+=(count*comma);
            lower*=1000;
            comma++;
        }
        return res;
    }
};