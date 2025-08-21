class Solution {
public:
    string reversePrefix(string word, char ch) {
        string empty = "";
        int index = 0;
        for(int i =0;i<word.size();i++){
            if(word[i]==ch){
                index = i ;
                break;
            }
        }
        if(index ==-1){
            return word;
        }

        for(int i=index;i>=0;i--){
            empty = empty+word[i];
        }
        for(int i =index+1;i<word.size();i++){
            empty=empty+word[i];
        }
        return empty;
    }
};