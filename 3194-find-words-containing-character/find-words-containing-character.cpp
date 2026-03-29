class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        for(int i =0;i<words.size();i++){
            for(int j =0;j<words[i].size();j++){
                string s = words[i];
                if(s[j]==x){
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;

        
    }
};