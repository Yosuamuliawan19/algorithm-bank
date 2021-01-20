class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int ans = 0, mx = arr[0];
        for (int i=1;i<arr.size()-1;i++){
            if (arr[i] > mx){
                ans = i;
                mx = arr[i];
            }
        }
        return ans;
    }
};