class Solution {
public:
    int romanToInt(string s) {
        // define a map with key value pairs , value of I is 1 and so on
        unordered_map<char,int> roman ={
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        // define 2 variables total and prev set to 0
        int total =0; 
        int prev =0;
        
        for(int i =s.size();i>=0;i--){
            int curr = roman[s[i]];// I ->1
            if(curr<prev){ // 1 !<0
                total -=curr;
            }
            else{
                total +=curr; // total = 0+1
            }
            prev = curr; // prev = 1;
        }
        return total ;
        
    
    }
};