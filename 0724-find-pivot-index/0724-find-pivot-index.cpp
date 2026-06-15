class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> prefix(nums.size());
        prefix[0]=nums[0];
        for(int i=1; i<nums.size(); i++){
            prefix[i] =nums[i]+prefix[i-1];
        }
        int total=prefix[prefix.size()-1];
        if (total-prefix[0]==0){return 0;}
        for (int i=1; i<nums.size(); i++){
            int right=total-prefix[i];
            if (right==prefix[i-1]) {return i;}
        }
        return -1;
    }
};