class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int, int> mp;
        for (int i=1;i<=numbers.size();i++){
            if (mp.find(target-numbers[i-1]) != mp.end()) return vector<int>({ mp[target-numbers[i-1]],i});
            mp[numbers[i-1]] = i;
        }
        return vector<int>();
    }
};