class Solution {
public:
    int lengthOfLastWord(string s) {
        int index = s.size()-1;
        while(index >=0 && s[index]==' '){
            index--;
        }
        int eow = index;
        while(index>= 0 && s[index]!=' '){
            index--;
        }
        int lolw = eow - index;
        return lolw;
        

    }
};