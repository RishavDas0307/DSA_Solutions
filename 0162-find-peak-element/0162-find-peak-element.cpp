class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        int peak=-1;
        while (l<=r) {
            int mid=l+(r-l)/2;
            if (mid==n-1 || nums[mid]>nums[mid+1]) {
                peak=mid;
                r=mid-1;
            } 
            else {l=mid+1;}
        }
        return peak;
    }
};