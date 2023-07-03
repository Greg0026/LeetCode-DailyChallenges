class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if (s.size()!=goal.size()) return false;
        if (s==goal)  {
            unordered_set<char> unique (s.begin(), s.end());
            return unique.size()<s.size();
        }

        vector<pair<char, char>> v;
        for (int i = 0; i<s.size(); ++i) {
            if (s[i]!=goal[i]) {
                v.push_back(pair<char, char> ({s[i], goal[i]}));
            }
        }
        if (v.size()!=2) return false;
        return v[0].first==v[1].second && v[1].first==v[0].second;
    }
};
