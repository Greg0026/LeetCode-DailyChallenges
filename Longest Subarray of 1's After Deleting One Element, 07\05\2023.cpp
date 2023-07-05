class Solution {

    int countOne (vector<int> cpy, int i, int curr) {
        cpy.erase(cpy.begin()+i);
        while (cpy[i]!=0 && i<cpy.size()) {
            ++curr; 
            ++i;
        }
        return curr;
    }

public:
    int longestSubarray (vector<int>& nums) {
        if (count(nums.begin(), nums.end(), 0)==0) return nums.size()-1;

        int count = 0, curr = 0;
        for (int i = 0; i<nums.size(); ++i) {
            if (nums[i]==0) {
                count = max(count, countOne(nums, i, curr));
                curr = 0;
            } else ++curr;
        }
        return count;
    }
};
