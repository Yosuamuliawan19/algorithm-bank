class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        map<int, vector<int> > mp2;
        vector<int> ans;
        
        for (int num: nums){
            if (mp.find(num) != mp.end()){
                mp[num]++;
            }else{
                mp[num] = 1;
            }
        }
        
        
        for (auto ent: mp){
            if (mp2.find(ent.second) == mp2.end()){
                mp2[ent.second] = vector<int>({ent.first});
            }else{
                mp2[ent.second].push_back(ent.first);    
            }
        }
        
        int idx = 0;
        for (auto iter = mp2.rbegin(); iter != mp2.rend(); iter++){
            for (int cur: iter->second){
                ans.push_back(cur);
                idx ++;
            }
            if (idx == k) break;
        }
        
        
        return ans;
    }
};
    
    