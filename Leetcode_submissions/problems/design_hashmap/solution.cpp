class MyHashMap {
public:
    /** Initialize your data structure here. */
    vector<vector<pair<int,int> > > arr;
    MyHashMap() {
        arr =  vector<vector<pair<int,int> > >(100, vector<pair<int,int>>());
    }
    
    /** value will always be non-negative. */
    void put(int key, int value) {
        bool f = 0;
        for (int i=0;i<arr[key%100].size();i++){
            if (arr[key%100][i].first == key){
                f = 1;
                arr[key%100][i].second = value;
            }
        }
        if (!f) arr[key % 100].push_back(make_pair(key, value));
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        for (int i=0;i<arr[key%100].size();i++){
            if (arr[key%100][i].first == key){
                return arr[key%100][i].second;
            }
        }
        return -1;
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        for (int i=0;i<arr[key%100].size();i++){
            if (arr[key%100][i].first == key){
                arr[key%100][i].second = -1;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */