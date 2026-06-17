class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=nums[0];
        int cMax=nums[0];
        int cMin=nums[0];
        for (int i=1; i<nums.size(); i++){
            if (nums[i]<0) {swap(cMax, cMin);}
            cMax=max(nums[i], nums[i]*cMax);
            cMin=min(nums[i], nums[i]*cMin);
            ans=max(ans, cMax);
        }
        return ans;        
    }
};