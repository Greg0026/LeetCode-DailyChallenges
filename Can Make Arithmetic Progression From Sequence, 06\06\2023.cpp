class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int diff = arr[0]-arr[1];
        int asize = arr.size()-1;
        for (int i (0); i<asize; ++i) {
            if (arr[i]-arr[i+1]!=diff) return false;
        }

        return true;
    }
};
