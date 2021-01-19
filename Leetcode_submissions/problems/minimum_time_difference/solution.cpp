class Solution {
public:
    int conv(string a){
        return 60*(
            ((a[0]-'0') * 10) + (a[1]-'0')
        ) + ((a[3]-'0') * 10) + (a[4]-'0');
    }
    int findMinDifference(vector<string>& timePoints) {
        int ans = INT_MAX;
        vector<int> arr;
        for (string t: timePoints){
            arr.push_back(conv(t));
        }
        sort(arr.begin(), arr.end());
        
        for (int i=0;i<arr.size()-1;i++){
            ans = min(ans,abs(arr[i+1]-arr[i]) );
        }
        if (arr.size() != 0){
             ans = min(ans, arr[0] + (60 * 24) - arr[arr.size()-1]);
        }
       
        
        
        
        return ans;
    }
};