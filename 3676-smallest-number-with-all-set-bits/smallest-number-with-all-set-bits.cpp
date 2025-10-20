class Solution {
public:
    int smallestNumber(int n) {   
        int ans  = 0; 
        do{
            ans++;
        }while(pow(2,ans)<=n);
        return pow(2,ans)-1;
    }
};