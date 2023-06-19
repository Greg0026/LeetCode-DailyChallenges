class Solution {
public:
    int largestAltitude(vector<int>& dp) {
        int amax = 0;
        dp.insert(dp.begin(), 0);
        for (int i = 1; i<dp.size(); ++i) {
            dp[i] = dp[i-1]+dp[i];
            amax = max(amax, dp[i]);
        }
        return amax;
    }
};
