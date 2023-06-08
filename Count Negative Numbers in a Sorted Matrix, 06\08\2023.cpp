class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count (0);
        for (auto& v : grid) {
            sort(v.begin(), v.end());
            for (int i (0); i<v.size(); ++i) {
                if (v[i]<0) {
                    ++count;
                } else break;
            }
        }
        return count;
    }
};
