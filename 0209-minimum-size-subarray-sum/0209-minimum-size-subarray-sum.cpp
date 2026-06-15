class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=INT_MAX;
        int l=0;
        int curr=0;
        for (int r=0; r<nums.size(); r++){
            curr+=nums[r];
            while (curr>=target){
                ans=min(ans, r-l+1);
                curr-=nums[l];
                l++;
            }
        }
        return ans==INT_MAX?0:ans;
    }
};