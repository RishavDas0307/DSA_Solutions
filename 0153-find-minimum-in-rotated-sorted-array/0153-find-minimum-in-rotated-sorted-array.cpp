class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        int mini=-1;
        while (l<=r) {
            int mid = l+(r-l)/2;
            if (nums[mid]<=nums[n-1]){
                mini=mid;
                r=mid-1;
            }
            else {l=mid+1;}
        }
        return nums[mini];
    }
};