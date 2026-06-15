class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int maxi=INT_MIN;
        int i=0;
        unordered_map<int, int> freq;
        for (int j=0; j<fruits.size(); ++j){
            freq[fruits[j]]++;
            while (freq.size()>2){
                freq[fruits[i]]--;
                if (freq[fruits[i]]==0){
                    freq.erase(fruits[i]);
                }
                i++;
            }
            maxi=max(maxi, j-i+1);
        }
        return maxi;
    }
};