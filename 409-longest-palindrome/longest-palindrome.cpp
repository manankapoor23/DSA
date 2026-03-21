class Solution {
public:
    int longestPalindrome(string s) {
        // build a hash-map to keep a frequency count of the appearing letters
        int freq[2000]={0};
        int res = 0 ;
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
            if(freq[s[i]]%2==0){
                res+=2;
            }
        }

        for(int i =0;i<s.size();i++){
            if(freq[s[i]]%2){
                res+=1;
                break;
            }
        }
        return res;

        
    }
};