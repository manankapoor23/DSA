class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {

        // minuses are  plusses when even number of elements and plus = size/2
        // minuses are equal to size-1/2 when odd and plus = size-min
        // 2 to 1 minus 1 plus 
        // 3 to 1 minus 2 plus
        // 4 to 2 min 2 plus 
        // 5 to 2 min 3 plus 
        // 6 to 3 min 3 plus 
        // 7 to 3 min 4 plus 
        // 8 to 4 min 4 plus 
        // 9 to 4 min 5 plus 
        // 10 to 5 min 5 plus 
        // now that i can get number of plus and minus that are there i can use
        // i have to maximise the sum, hence sorting the array with squared and giving the smallest the minuses and the larger one the plusses and addig em
        int minus;
        int plus;
        if(nums.size()%2==0){
            minus=nums.size()/2;
            plus = minus;
        }
        else{
            minus = (nums.size()-1)/2;
            plus = nums.size()-minus;
        }
        // dry run on 1,2,3 this is 3 size so 1 minus and 2 pluses 
        // sort 1,2,3
        // i =0, minus =1
        // give nums[i]
        // now we have the number of + and - available for the particular vector
        // sort the array, assign - to first wale and then + to remaining ones
        for(int i =0;i<nums.size();i++){
            nums[i]=pow(nums[i],2);
        }

        sort(nums.begin(),nums.end());
        long long ans =0;
        int i=0;
        while(minus!=0 && i<nums.size()){
            ans = ans - nums[i];
            i++;
            minus--;
        }
        while(plus!=0 && i<nums.size()){
            ans = ans+ nums[i];
            i++;
            plus--;
        }
        return ans;


        
    }
};