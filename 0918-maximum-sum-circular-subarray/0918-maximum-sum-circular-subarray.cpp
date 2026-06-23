class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total=0;
        int currMax=0;
        int currMin=0;
        int maxSum=nums[0];
        int minSum=nums[0];
        for (int i=0; i<nums.size(); i++){
            currMax=max(currMax+nums[i], nums[i]);
            maxSum=max(maxSum, currMax);
            currMin=min(currMin+nums[i], nums[i]);
            minSum=min(minSum, currMin);
            total=total+nums[i];
        }
        int normal=maxSum;
        int circular=total-minSum;
        if (minSum==total){
            return normal;
        }
        return max(normal, circular);
    }
};