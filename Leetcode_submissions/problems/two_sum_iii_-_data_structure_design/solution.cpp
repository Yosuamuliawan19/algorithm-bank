class TwoSum {
public:
    /** Initialize your data structure here. */
    map<long long, long long> mp;
    TwoSum() {
        
    }
    
    /** Add the number to an internal data structure.. */
    void add(int number) {
        mp[number] ++;
    }
    
    /** Find if there exists any pair of numbers which sum is equal to the value. */
    bool find(int value) {
        for (auto it: mp){
            long long cur = value - it.first;
            // printf("%d %d\n", cur, it.first);
            // printf("%d\n", mp[cur]);
            if (cur == it.first){
                if (mp[cur] >= 2) return 1;
            }else if (mp.find(cur) != mp.end()){
                return 1;
            }
        }
        return 0;
    }
};

/**
 * Your TwoSum object will be instantiated and called as such:
 * TwoSum* obj = new TwoSum();
 * obj->add(number);
 * bool param_2 = obj->find(value);
 */