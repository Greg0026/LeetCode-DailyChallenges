class SnapshotArray {
    
    // Time Limit Exdeeded, ridiculous testcases
    unordered_map<int, int> nums;
    unordered_map<int, unordered_map<int, int>> m;
    unordered_map<int, unordered_map<int, int>*> duplicates;
    int nsnap;

public:
    SnapshotArray(int length) {
        nsnap = 0;
    }
    
    void set(int index, int val) {
        nums[index] = val;
    }
    
    int snap() {
        if (m[nsnap-1]!=nums) m.insert({nsnap, nums}); else duplicates.insert({nsnap, &m[nsnap-1]});
        ++nsnap;
        return nsnap-1;
    }
    
    int get(int index, int snap_id) {
        if (duplicates.count(snap_id)!=0) return duplicates[snap_id][0][index];
        return m[snap_id][index];
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */
