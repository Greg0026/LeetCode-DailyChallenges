class Solution {
public:

    vector<int> findSmallestSetOfVertices (int n, vector<vector<int>>& edges) {
        
        vector<int> v, y;
        for (int i (0); i<n; ++i) v.push_back(i);
        for (auto& el : edges) {
            v[el[1]] = -1;
        }
        for (auto& el : v) if (el!=-1) y.push_back(el);

        return y;
        
    }
};
