class Solution {
public:
    int sum(int n){
        int ans = 0;
        while (n != 0){
            ans += n%10;
            n /= 10;
        }
        return ans;
    }
    int countLargestGroup(int n) {
        map<int, vector<int> > mp;
        for (int i=1;i<=n;i++){
            int cur = sum(i);
            if (mp.find(cur) != mp.end()){
                mp[cur].push_back(i);
            }else{
                mp[cur] = vector<int>({i});
            }
        }
        map<int,int> mp2;
        for (auto it: mp){
            mp2[it.second.size()]++;
        }
        int mx = -1, cnt = 0;
        for (auto it: mp2){
            if (it.first > mx){
                mx = it.first;
                cnt = it.second;
            }
            // cout << it.first << " " << it.second << endl;
        }
        
        return cnt;
    }
};