class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> y;
        if (nums.empty()) return y;

        int checkpoint = nums[0];
        int right_n = checkpoint;
        for (int i = 0; i<nums.size(); ++i) {
            if (i+1>nums.size()-1) { break;}
            if (nums[i+1]!=right_n+1) {
                if (checkpoint!=nums[i]) {
                    y.push_back(to_string(checkpoint)+"->"+to_string(nums[i]));
                    checkpoint = nums[i+1];
                    right_n = nums[i+1];
                } else {
                    y.push_back(to_string(checkpoint));
                    checkpoint = nums[i+1];
                    right_n = nums[i+1];
                }
            } else ++right_n;
        }

        if (checkpoint!=nums[nums.size()-1]) y.push_back(to_string(checkpoint)+"->"+to_string(nums[nums.size()-1]));
        else y.push_back(to_string(checkpoint));

        return y;
    }
};
