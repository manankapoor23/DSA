class Solution {
public:
    int reverseDegree(string s) {
        // value of a char in rev will be 123-its ascii value
        // for a ascii is 97 so to make it 26, we do 123-97=26
        // for b we do 123-its ascii value 
        int ans;
        int i =1;
        int store =0;
        for(char c:s){
            ans =0;
            ans = ans+(123-c);
            ans = ans*i;
            store = store+ans;
            i++;
        }
        return store;
    }
};