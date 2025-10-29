class Solution {
public:
    string longestCommonPrefix(vector<string>& st){
        sort(st.begin(),st.end());
        string empty = "";
        string start = st[0];
        string last = st[st.size()-1];
        int i = 0 ;
        while(i<start.size()){
            if(start[i]==last[i]){
                empty += start[i];
                i++;
            }
            else{
                break;
            }
        }
        return empty ;
       
    }
};