class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(target.begin(), target.end());
        sort(arr.begin(), arr.end());
        for (int i=0;i<arr.size();i++){
            if (target[i] != arr[i]) return 0;
        }
        return 1;
    }
};