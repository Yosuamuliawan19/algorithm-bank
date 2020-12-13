class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ans = 0;
        for (auto a: arr1){
            int cnt = 0;
            for (auto b: arr2){
                if (abs(b-a) > d){
                    cnt ++;
                }
            }
            if (cnt == arr2.size()) ans ++;
        }
        return ans;
    }
};