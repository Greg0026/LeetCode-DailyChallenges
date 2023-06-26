class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        unordered_map<int, unordered_map<int, int>> m;
        int nmax = 2;
        int nsize = nums.size();
        for (int i = 0; i<nsize; ++i) {
            for (int j = i+1; j<nsize; ++j) {
                int diff = nums[j]-nums[i];
                m[diff][j] = m[diff].count(i) ? m[diff][i] + 1 : 2;;
                nmax = max(nmax, m[diff][j]);
            }
        }
        return nmax;
    }
};
