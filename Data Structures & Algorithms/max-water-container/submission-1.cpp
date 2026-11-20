class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int ans = 0;
        int left = 0;
        int right = n-1;
        while(left<right){
            int w = right-left;
            int h = min(heights[left],heights[right]);
            int a = w*h;
            ans = max(ans, a);
            if(heights[left]<heights[right]){
                left++;
            }else{
                right--;
            }
        }
        return ans;
    }
};