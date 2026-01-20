class Solution {
public:
    bool isBalanced(string num) {
        int e_sum=0;
        int o_sum =0;
        for(int i =0;i<num.size();i++){
            int dig = num[i]-'0';
            if(i%2==0){
                e_sum=e_sum+dig;
            }
            else{
                o_sum=o_sum+dig;
            }
        }
        return (e_sum==o_sum);
        
    }
};