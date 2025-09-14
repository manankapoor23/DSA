class Solution {
public:
    int addDigits(int num) {
        if(num<=9){
            return num;
        }
        int sum = 0 ;
        int digit ;
        while(num>0){
            digit = num%10;
            sum+=digit;
            num=num/10;
        }
        
        return addDigits(sum);
    }
};