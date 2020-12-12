class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mp;
        set<int> st1, st2;
        for (auto i: arr){
            mp[i]++;
            st1.insert(i);
        }
        for (auto i: mp){
            st2.insert(i.second);
        }
        return st1.size() == st2.size();
    }
};