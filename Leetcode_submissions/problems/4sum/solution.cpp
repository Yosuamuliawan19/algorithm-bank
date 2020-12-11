class Solution {
public:
    
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        map<int, vector<pair<int,int>>> mp;
        for (int i=0;i<n;i++){
            for (int j=i+1;j<n;j++){
                int sum = nums[i] + nums[j];
                if (mp.find(sum) != mp.end()){
                    mp[sum].push_back(make_pair(i,j));
                }else{
                    mp[sum] = vector<pair<int,int> > ({make_pair(i,j)});
                    
                }
            }
        }
        set<vector<int> > ans;
        vector<int> tmp;
        for (auto it: mp){
            int val = target - it.first;
            if (mp.find(val) != mp.end()){
                // cout << val <<" " << it.first <<endl; 
                for (int i=0;i<mp[val].size();i++){
                    for (int j=0;j<mp[it.first].size();j++){
                        int a = mp[val][i].first, b = mp[val][i].second, c = mp[it.first][j].first, d = mp[it.first][j].second;
                        printf("%d %d %d %d\n", a,b,c,d);
                        if (a != d &&b != d && a != c && b != c){
                            tmp = vector<int> ({nums[a],nums[b],nums[c],nums[d]});
                            sort(tmp.begin(), tmp.end());
                            ans.insert(tmp);
                        }
                    }
                }
            }  
        }
        vector<vector<int> > ret;
        for (auto cur: ans){
            ret.push_back(cur);
        }
        return ret;
    }
};