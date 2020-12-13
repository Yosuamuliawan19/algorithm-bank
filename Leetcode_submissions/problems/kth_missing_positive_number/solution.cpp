class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int cur = 1, cnt = 0;
        for (int i=0;i<arr.size();i++){
            while (arr[i] != cur){
                
                
                cnt ++;
                if (cnt == k){
                    return cur;
                }
                cur ++;
                // cout << cur << " " << cnt << endl;
            }
            cur ++;
        }   
        while (cnt != k-1){
            cur ++;
            cnt++;
        }
        return cur;
    }
};