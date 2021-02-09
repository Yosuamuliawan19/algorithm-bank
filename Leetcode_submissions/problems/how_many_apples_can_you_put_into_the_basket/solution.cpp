class Solution {
public:
    int maxNumberOfApples(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int cur = 0, ans = 0;
        while (ans < arr.size() && cur + arr[ans] <= 5000){
            cur += arr[ans++];
        }
        return ans;
    }
};