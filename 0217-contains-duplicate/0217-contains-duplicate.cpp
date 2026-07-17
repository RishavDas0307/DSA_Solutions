class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> table;
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            if (table.contains(nums[i]) || table.contains(nums[j])) {return true;}
            table.insert(nums[i++]);
            if (table.contains(nums[j])) {return true;}
            table.insert(nums[j--]);
        }
        if (i==j && table.contains(nums[i])) {return true;}
        return false;
    }
};