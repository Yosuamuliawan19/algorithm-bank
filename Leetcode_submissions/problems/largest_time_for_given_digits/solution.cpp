class Solution {
public:
    bool found = 0;
    string ans = "";
    bool isValid(vector<int>& cur){
        if (cur.size() >= 1){
            if (cur[0] > 2) return 0;
        }
        if (cur.size() >= 2){
            if (cur[0] == 2 && cur[1] >= 4) return 0;
        }
        if (cur.size() >= 3){
            if (cur[2] >= 6) return 0;
        }
        return 1;
    }
    vector<int> arr;
    void rec(vector<int>& cur, vector<bool>& vis){
        if (found) return;
        if (!isValid(cur)) return;
        if (cur.size() >= 4){
            found = 1;
            for (int i=0;i<4;i++){
                ans += (char)(cur[i]+'0');
                if (i == 1) ans += ":";
            }
            return;
        }
        for (int i=0;i<4;i++){
            if (!vis[i]){
                vis[i] = 1;
                cur.push_back(arr[i]);
                rec(cur, vis);
                cur.pop_back();
                vis[i] = 0;
            }
        }
    }
    string largestTimeFromDigits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), greater<int>());
        this->arr = arr;
        vector<int> a;
        vector<bool> b(4, 0);
        rec(a,b);
        return ans;
    }
};