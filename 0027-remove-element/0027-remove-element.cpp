class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        if (n==0) {return 0;}
        int i=0;
        int j=0;
        while (j<n){
            if (nums[i]!=val){
                i++;
                j=i;
            } else if (nums[i]==val && nums[j]!=val) {
                swap(nums[i],nums[j]);
                i++;
            } else if (nums[i]==val && nums[j]==val){
                j++;
            }
        }
        return i;
    }
};