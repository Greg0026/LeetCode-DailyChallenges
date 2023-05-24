class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        map<int, int> m;
        for (auto& el : nums) {
            ++m[el];
        }
        
        vector<int> y;

        for (int i = 0; i<k; ++i) {
            auto max = m.begin();
            auto eraseThis = m.begin();
            for (auto it = m.begin(); it!=m.end(); ++it) {
                if (it->second>max->second) {
                    max = it;
                    eraseThis = it;
                }
            }
            y.push_back(max->first);
            m.erase(eraseThis);
        }
        return y;
    }
};
