class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int, int>freq;
        for (int i=0; i<nums.size(); i++){
            freq[nums[i]]=freq[nums[i]]+1;
        }
        int k=0;
        for (int i=0; i<freq[0]; i++){
            nums[k]=0;
            k++;     
        }
        for (int i=0; i<freq[1]; i++){
            nums[k]=1;
            k++;     
        }
        for (int i=0; i<freq[2]; i++){
            nums[k]=2;     
            k++;
        }
    }
};