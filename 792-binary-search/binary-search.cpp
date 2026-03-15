class Solution {
private:
    int bs(vector<int> &ans , int target , int s ,int e){
        if(s>e){
            return -1;
        }
        int mid = s+(e-s)/2;
        if(ans[mid]==target){
            return mid;
        }
        else if(ans[mid]>target){
            return bs(ans,target,s,mid-1);
        }
        else{
            return bs(ans,target,mid+1,e);
        }
    }
public:
    int search(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size()-1;
        return bs(nums,target,s,e);

    }
};