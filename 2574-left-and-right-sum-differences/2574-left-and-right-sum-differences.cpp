class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        int r = accumulate(nums.begin(), nums.end(), 0);
        int l=0;
        for (int i=0; i<n; i++){
            r -= nums[i];
            ans[i]=abs(l-r);
            l+=nums[i];
        }
        return ans;
    }
};