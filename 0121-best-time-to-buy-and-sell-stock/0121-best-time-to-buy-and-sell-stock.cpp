class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=INT_MAX;
        int max=0;
        for (int price:prices){
            if (price<min){
                min=price;
            }
            else if (price-min>max){
                max=price-min;
            }
        }
        return max;
    }
};