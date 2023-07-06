class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        /* Time Limit Exceeded
        int vmin = INT_MAX;
        for (int i = 0; i<nums.size(); ++i) {
            int curr = nums[i];
            int size = 1;
            for (int j = i+1; j<nums.size(); ++j) {
                if (curr>=target) break;
                curr+=nums[j];
                ++size;
            }
            if (curr>=target) vmin = min(vmin, size);
        }
        return vmin!=INT_MAX ? vmin : 0; 
        */

        int i = 0, n = nums.size(), res = n + 1;
        for (int j = 0; j < n; ++j) {
            target -= nums[j];
            while (target <= 0) {
                res = min(res, j - i + 1);
                target += nums[i++];
            }
        }
        return res % (n + 1);
    }
};
