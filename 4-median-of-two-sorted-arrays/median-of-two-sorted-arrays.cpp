class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;
        int m = nums1.size();
        int n = nums2.size();
        int k = m + n;

        int i = 0, j = 0;

        // merge both arrays
        while(i < m && j < n) {
            if(nums1[i] < nums2[j]) {
                nums.push_back(nums1[i++]);
            } else {
                nums.push_back(nums2[j++]);
            }
        }

        // remaining elements
        while(i < m) nums.push_back(nums1[i++]);
        while(j < n) nums.push_back(nums2[j++]);

        // find median
        if(k % 2 == 1) {
            return nums[k / 2];
        } else {
            return (nums[k / 2 - 1] + nums[k / 2]) / 2.0;
        }
    }
};