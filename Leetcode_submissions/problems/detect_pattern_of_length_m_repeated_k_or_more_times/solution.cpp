class Solution {
public:
    bool containsPattern(vector<int>& arr, int m, int k) {
        if (arr.size() < m*k) return 0;
        // cout <<arr.size() << " "<< m*k << endl;
        for (int i=0;i<=arr.size()-(m*k);i++){
            bool f = 1;
            for (int j=i;j<i+(m*k);j++){
                // cout << j << " " << i+(j-i)%m << endl;
                if (arr[j] != arr[i+(j-i)%m]){
                    f = 0; break;
                }
            }
            if (f) return 1;
        }
        return 0;
    }
};