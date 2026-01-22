class Solution {
public:
    string longestCommonPrefix(vector<string>& st){
        sort(st.begin(),st.end()); // sort them so that we can get match easily 
        string empty = "";
        string start = st[0]; // flight
        string last = st[st.size()-1]; // flower
        int i = 0 ;
        while(i<start.size()){ // i = 0  , 1<2
            if(start[i]==last[i]){ // f == f 
                empty += start[i]; // empty = f
                i++; //i = 1
            }
            else{
                break;
            }
        }
        return empty ;
       
    }
};