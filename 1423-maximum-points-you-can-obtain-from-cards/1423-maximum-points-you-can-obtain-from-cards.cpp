class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();

        int total = accumulate(cardPoints.begin(), cardPoints.end(), 0);

        if (k == n) return total;

        int window = n - k;

        int curr = 0;
        for (int i = 0; i < window; i++)
            curr += cardPoints[i];

        int mini = curr;

        for (int i = window; i < n; i++) {
            curr += cardPoints[i];
            curr -= cardPoints[i - window];
            mini = min(mini, curr);
        }

        return total - mini;
    }
};