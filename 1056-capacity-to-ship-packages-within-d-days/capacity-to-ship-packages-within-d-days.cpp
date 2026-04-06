class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        // take out the max value from weights
        int left = *max_element(weights.begin(),weights.end());
        int right = accumulate(weights.begin(),weights.end(),0); // a ship with exact total sum capacity takes one day to load 
        // our answer lies between these two , 
        // 4 and 16 for example 2

        int mid = left+(right-left)/2; // 10 capacity 
        int ans = INT_MAX;
        while(left<right){
            mid = left+(right-left)/2;
            // here mid is the capacity it is 10 so lets test at 10
            int d = 1;
            int sum =0;
            for(int w:weights){
                if(sum+w>mid){
                    d++;
                    sum=0;
                }
                sum+=w;
            }
            if(d>days){
                left = mid+1;
            }
            else{
                right = mid;
            }
            ans = left;
            
        }
        return ans;



        
    }
};