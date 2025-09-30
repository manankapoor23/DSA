class Solution {
public:
    double hours(vector<int>& arr,int x){
            double total_hours = 0 ;
            for(int i =0 ;i<arr.size();i++){
                total_hours = total_hours+ceil(double(arr[i])/double(x));
            }
            return total_hours;
        }
    int minEatingSpeed(vector<int>& piles, int h) {
        int ans =INT_MAX ;
        int maxi = INT_MIN;
        for(int i = 0 ;i<piles.size();i++){
            maxi= max(maxi,piles[i]);
        }
        int s = 1 ;
        int e = maxi;
        int i = 0 ;
        while(s<=e){
            int k = s+(e-s)/2;
            double tot = hours(piles,k);
            if(tot<=h){
                ans = k;
                e=k-1;
            }
            else if(tot>h){
                s = k+1;
            }

        }
        return ans;


        
    }
};