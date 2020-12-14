class OrderedStream {
public:
    int idx = 0;
    vector<string> arr;
    OrderedStream(int n) {
        arr = vector<string>(n, "");
    }
    
    vector<string> insert(int id, string value) {
        arr[id-1] = value;
        vector<string> cur;
        while (idx != arr.size() &&arr[idx] != ""){
            cur.push_back(arr[idx]);
            idx++;
        }
        return cur;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(id,value);
 */