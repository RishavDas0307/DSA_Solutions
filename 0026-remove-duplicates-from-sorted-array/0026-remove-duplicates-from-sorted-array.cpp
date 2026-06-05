class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,j;
        i=0;j=0;
        int n=nums.size();
        while (j!=n){
            if (nums[j]>nums[i]){
                swap(nums[i+1],nums[j]);
                i++;
            }
            j++;
        }
        return i+1;
    }
};