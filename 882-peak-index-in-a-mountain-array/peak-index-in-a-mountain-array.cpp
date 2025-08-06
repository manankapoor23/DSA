class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int max1 = max_element(arr.begin(),arr.end())-arr.begin();
    return max1 ;
        
    }
};