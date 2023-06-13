class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int count = 0;

        vector<vector<int>> col;
        for (int i = 0; i<grid.size(); ++i) {
            vector<int> tmp;
            for (int j = 0; j<grid.size(); ++j) {
                tmp.push_back(grid[j][i]);
            }
            col.push_back(tmp);
        } 

        for (int i = 0; i<grid.size(); ++i) {
            for (int j = 0; j<grid.size(); ++j) {
                if (grid[i]==col[j]) ++count;
            }
        }

        return count;
    }
};
