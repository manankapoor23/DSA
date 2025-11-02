class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> before ;
        string empty = "";
        int i =0;
        while(i<word.size() && word[i]!=ch){
            before.push(word[i]);
            i++;
        }
        if(i==word.size()){
            return word;
        }
        before.push(word[i]);
        while(!before.empty()){
            empty+=before.top();
            before.pop();
        }
        i++;
        while(i<word.size()){
            empty+=word[i];
            i++;
        }
        return empty;
        

        
    }
};