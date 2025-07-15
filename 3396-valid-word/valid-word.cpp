class Solution {
public:
    bool isValid(string word) {
        bool isvowel = false;
        bool isconsonant = false;
        if(word.length()<3){
            return false;
        }
        for(char c : word){
            if(!isalnum(c))
                return false;
            if(isalpha(c)){
                char lower = tolower(c);
                if(lower == 'a'||lower =='e'||lower =='i'||lower =='o'||lower =='u'){
                    isvowel = true;
                }
                else{
                    isconsonant = true;
                }
            }
            
        }
       return isvowel && isconsonant;
        
    }
};