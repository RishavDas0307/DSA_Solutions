class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.size()==0) {return {-1,-1};}
        vector<int> ans={-1,-1};
        int low=0;
        int high=nums.size()-1;
        int mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if (nums[mid]==target){
                break;
            } else if (nums[mid]>target){
                high=mid-1;
            } else {
                low=mid+1;
            }
        }
        int start=mid;
        int end=mid;
        if (nums[mid]==target){
            while (start >= 0 && nums[start] == target) {start--;}
            while (end < nums.size() && nums[end] == target) {end++;}
            ans={start+1,end-1};
        }
        return ans;
    }
};