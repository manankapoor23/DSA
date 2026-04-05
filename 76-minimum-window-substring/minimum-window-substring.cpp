class Solution {
public:
    string minWindow(string s, string t) {
        int ls = s.size();
        int lt = t.size();
        if(lt>ls){
            return "";
        }

        map<char,int> mp;
        for(char ch:t){
            mp[ch]++;
        }

        // now we have a map ready with a1 b1 c1;

        int reqCount = lt;
        int i=0;
        int j =0;
        int windowSize = INT_MAX; // keep a max window size since we need min
        int start_i = 0; // tracker of the i
        
        while(j<ls){
            char ch = s[j];
            if(mp[ch]>0){
                // required char 
                reqCount--;
            }
            mp[ch]--;
            while(reqCount==0){
                // shrink the window
                // i++ karna start karo
                int currWindowSize = j-i+1;
                if(currWindowSize<windowSize){
                    windowSize=currWindowSize;
                    start_i=i;
                }
                mp[s[i]]++;
                if(mp[s[i]]>0){
                    reqCount++;
                }
                i++;
            }
            // now reqCoun is no more 0
            j++;

        }
        return windowSize == INT_MAX ? "" : s.substr(start_i,windowSize);


        
    }
};