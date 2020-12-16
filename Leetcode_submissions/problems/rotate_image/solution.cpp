class Solution {
public:
    
    void rotate(vector<vector<int>>& arr) {
        int n = arr.size()-1;
        int a = 0, b = n;
        while (a < b){
            for (int i=0;i<(b-a);i++){
                swap(arr[a][a+i], arr[a+i][b]);
                swap(arr[a][a+i], arr[b][b-i]);
                swap(arr[a][a+i], arr[b-i][a]);
            }
            a++;
            b--;
        }
    }
};