class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0;
        int ans=INT_MIN;
        for (int j=0; j<nums.size(); j++){
            if (nums[j]==0){
                ans=max(i, ans);
                i=0;
            } else {
                i++;
            }
        }
        ans=max(i,ans);
        return ans;
    }
};