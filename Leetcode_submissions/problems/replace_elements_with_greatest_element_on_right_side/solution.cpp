class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int mx = arr[arr.size()-1];
        arr[arr.size()-1] = -1;
        for (int i=arr.size()-2;i>=0;i--){
            int prev = arr[i];
            arr[i] = mx;
           mx = max(mx, prev);
            // cout << mx << endl;
        }
        return arr;
    }
};