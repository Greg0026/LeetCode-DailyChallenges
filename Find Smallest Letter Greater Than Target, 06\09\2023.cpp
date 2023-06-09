class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        string letters_ = "abcdefghijklmnopqrstuvwxyz";
        int lsize = letters_.size();
        int target_i;
        int min (INT_MAX);
        for (int i (0); i<lsize; ++i) {
            if (letters_[i]==target) target_i = i;
        }
        for (auto& el : letters) {
            if (!(el==target)) {
                int i (target_i);
                for (; i<lsize; ++i) {
                    if (letters_[i]==el) {
                        if (i>target_i && i<min) min = i;
                    }
                }
            }
        }
        if (min==INT_MAX) return letters[0];
        return letters_[min];

    }
};
