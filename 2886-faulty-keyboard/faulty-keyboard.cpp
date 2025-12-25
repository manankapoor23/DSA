class Solution {
public:
    string finalString(string s) {
        vector<char> answer;
        string storer="";
        int i =0;
        while(i<s.size()){
            if(s[i]!='i'){
                answer.push_back(s[i]);
            }
            else if(s[i]=='i'){
                reverse(answer.begin(),answer.end());
            }
            i++;
        }
        for(char c:answer){
            storer+=c;
        }
        return storer;



        // dalte raho 
        // i aagya , pakdo reverse maro aur inset kardo ,
        // wapas i aaya pakdo reverse maro aur inset kardo 
        // fir to insert bas karte raho
        
    }
};