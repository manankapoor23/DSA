class Solution {
public:
        double time(vector<int>& arr,int k ){
            double total = 0 ;
            for(int i =0;i<arr.size();i++){
                total=total+ceil(double(arr[i]/double(k)));
            }
            return total;
        }
    int minEatingSpeed(vector<int>& piles, int h) {
        int ans = INT_MIN;
        int s = 1;
        int maxi = INT_MIN;
        for(int i =0;i<piles.size();i++){
            maxi = max(maxi,piles[i]);
        }
        int e = maxi;
        int k = s+(e-s)/2;
        while(s<=e){
            k = s+(e-s)/2;
            double tot = time(piles,k);
            if(tot<=h){
                ans = k;
                e=k-1;
            }
            else{
                s=k+1;
            }
        }
        return ans;

        
    }
};