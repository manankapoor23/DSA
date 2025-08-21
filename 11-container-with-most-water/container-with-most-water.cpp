class Solution {
public:
    int maxArea(vector<int>& height) {
        long long maxArea = 0;
        int start = 0 ;
        long long areaMax ;
        int end = height.size()-1;
        while(start<end){
            long long h = min(height[start],height[end]);
            long long area = h*(end-start);
            maxArea=max(maxArea,area);

            if(height[start]<height[end]){
                start++;
            }
            else{
                end--;
            }

        }
        return maxArea;
    }
};