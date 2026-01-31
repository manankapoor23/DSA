class Solution {
public:
    bool isPalindrome(string s) {
        stack<char> st;
        string t ="";
        for(char c :s){
            if(isalnum(c)){
                t+=tolower(c);
                st.push(tolower(c));
            }
        }
        bool ans = true;
        // we have a stack ready
        for(char c:t){
            if(c!=st.top()){
                ans=false;
            }
            st.pop();
        }
        return ans;



        
    }
};