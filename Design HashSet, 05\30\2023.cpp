class MyHashSet {
    // it's not an hashset
    vector<int> pairs;

public:  
    MyHashSet() {}

    bool contains(int key) {
        if (pairs.size()==0) return false;
        if (pairs.size()!=0){
            if (find(pairs.begin(), pairs.end(), key)==pairs.end())
                return false;
        }
        return true;
    }

    void add(int key) {
        if (!contains(key))
            pairs.push_back(key);
    }
    
    void remove(int key) {
        if (contains(key))
            pairs.erase(find(pairs.begin(), pairs.end(), key));
    }

};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
