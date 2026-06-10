class Solution {
public:
    int maxArea(vector<int>& height) {
        int m=-1;
        int i=0; int j=height.size()-1;
        while(i<j){
            int t=(j-i)*min(height[i], height[j]);
            m=max(m, t);
            if (height[j]<height[i]){
                j--;
            } else {
                i++;
            }
        }
        return m;
    }
};