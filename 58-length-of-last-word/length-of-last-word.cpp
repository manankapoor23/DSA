class Solution {
public:
    int lengthOfLastWord(string s) {
        int index = s.size()-1; // index rn is 9
        while(index >=0 && s[index]==' '){
            index--;
        }
        int eow = index; // eow = 9
        while(index>= 0 && s[index]!=' '){
            index--; // 9-1-1-1-1 = 4
        }
        int lolw = eow - index; // 9 -4 = 5
        return lolw;
        

    }
};