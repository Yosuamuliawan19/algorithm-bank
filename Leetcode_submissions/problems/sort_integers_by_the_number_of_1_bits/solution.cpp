class Solution {
public:
    int bin(int a){
        int ans = 0;
        while (a != 0){
            ans += (a & 1);
            a = a >> 1;
        }
        return ans;
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<int> ans; 
        vector<vector<int> > srt;
        for (int i=0;i<arr.size();i++){
            srt.push_back(vector<int>({bin(arr[i]), arr[i]}));
        }
        sort(srt.begin(), srt.end());
        for (auto i: srt){
            ans.push_back(i[1]);
        }
        return ans;
        
    }
};