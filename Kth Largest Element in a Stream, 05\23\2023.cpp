// TIME LIMIT EXCEDEED

class KthLargest {

    vector<int> nums;
    int k;

public:
    KthLargest (int k_, vector<int>& nums_) : k(k_), nums(nums_) {}
    
    int add (int val) {
        nums.emplace_back(val);
        vector<int> tmp = nums;
        for (int i (0); i<k-1; ++i) {
            tmp.erase(max_element(tmp.begin(), tmp.end()));
        }
        return *max_element(tmp.begin(), tmp.end());
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
