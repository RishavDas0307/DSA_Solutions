#include <unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> no;
        for(int i=0; i<nums.size(); i++){
            int x=target-nums[i];
            if(no.find(x)!=no.end()){
                return {no[x],i};
            }
            no[nums[i]]=i;
        }
        return {};
    }
};