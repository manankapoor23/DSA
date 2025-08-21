class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int start = 0, end = height.size() - 1;

        while (start < end) {
            int h;
            if (height[start] < height[end]) {
                h = height[start];
                maxArea = max(maxArea, h * (end - start));
                start++;
            } else {
                h = height[end];
                maxArea = max(maxArea, h * (end - start));
                end--;
            }
        }
        return maxArea;
    }
};
