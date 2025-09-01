class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        char stak[n];
        int top =0;

        for(int i =0;i<n;i++){
            stak[top]=s[i];
            top++;
        }

        for(int i =0;i<n;i++){
            s[i]=stak[--top];
        }
        
    }
};