class Solution {
public:

    bool isValid (int n, int index, int maxSum, int maximized) {
        vector<int> nums(n, 0);

        for (int i (0); i<n; ++i) {
            int diff = abs(i-index);
            maximized-diff>0 ? nums[i] = maximized-diff : nums[i] = 0;
        } 
        
        // for (auto el : nums) cout<<el<<" ";
        // cout<<endl;
        if (accumulate(nums.begin(), nums.end(), 0)<=maxSum) return true;
        return false;
    }

    int maxValue(int n, int index, int maxSum) {

        for (int i (maxSum); i>0; --i) {
            if(isValid(n, index, maxSum, i)) return i;
        }
        return 1;
    }
    // it doesn't work but i don't know why
};
