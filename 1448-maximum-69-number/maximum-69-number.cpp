class Solution {
public:
    int maximum69Number (int num) {
        vector<int> added;
        int a = num ;
        while(a!=0){
            added.push_back(a%10);
            a/=10;
        }
        reverse(added.begin(),added.end());

        for(int &number:added){
            if(number==6){
                number= 9;
                break;
            }
        }
        int result=0;
        for(int number:added){
            result = result*10+number;
        }
        return result;
        
    }
};