// I haven't studied the priority queue yet

class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        long long tot = 0;
        for (int i = 0; i<k; ++i) {
            auto first = min_element(costs.begin(), costs.end()), second = first;
            if (candidates<costs.size()) {
                first = min_element(costs.begin(), costs.begin()+candidates);
                second = min_element(costs.end()-candidates, costs.end());
            }
            int s = min(*first, *second);
            tot+=s;
            *first==s ? costs.erase(first) : costs.erase(second);
        }
        return tot;
    }
};
