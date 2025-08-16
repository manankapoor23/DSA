class Solution {
public:
    int maximum69Number (int num) {
        vector<int> added;
        int x;
        int size = 0;
        int a = num ;
        while(a!=0){
            x = a%10;
            added.push_back(x);
            size++;
            a=a/10;
        }
        reverse(added.begin(),added.end());

        for(int &number:added){
            if(number==6){
                number = 9;
                break;
            }
        }
        int r =0;
        for(int number:added){
            r = number+r*10;
        }
        return r;
        
    }
};