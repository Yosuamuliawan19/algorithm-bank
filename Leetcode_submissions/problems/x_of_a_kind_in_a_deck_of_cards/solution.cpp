class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> mp;
        for (int a: deck) mp[a] ++;
        int ans = -1;
        for (auto cur: mp){
            if (ans == -1){
                ans = cur.second;
            }else{
                ans = __gcd(ans, cur.second);
            }
        }
        return ans != 1;
    }
};