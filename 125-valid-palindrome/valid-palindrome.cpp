class Solution {
public:
    bool isPalindrome(string s) {
        string t ="";
        for(char c :s){
            if(isalnum(c)){
                t+=tolower(c);
            }
        }
        int start = 0 ;
        int end = t.size()-1;
        while(start<end){
            if(t[start]!=t[end]){
                return false;
            }
            start++;
            end--;
        }
        return true ;
        
    }
};