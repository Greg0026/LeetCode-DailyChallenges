class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> m;
        for (auto& el : nums) ++m[el];
        for (auto& el : m) if (el.second==1) return el.first;
        return -1;
    }
};
