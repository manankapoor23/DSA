class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n = nums.size();

        // Place each number in its correct index
        for (int i = 0; i < n;) {
            int correctIndex = nums[i] - 1;
            if (nums[i] != nums[correctIndex]) {
                swap(nums[i], nums[correctIndex]);
            } else {
                i++;
            }
        }

        // Collect missing numbers
        vector<int> result;
        result.reserve(n); // avoids reallocations

        for (int i = 0; i < n; i++) {
            if (nums[i] != i + 1) {
                result.push_back(i + 1);
            }
        }

        return result;
    }
};
