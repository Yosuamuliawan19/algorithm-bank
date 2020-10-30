class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map <int,int> mp;
        for (int i=0;i<nums1.size();i++){
            mp[nums1[i]] ++;
        }
        vector<int> ans;
        for (int i=0;i<nums2.size();i++){
            if(mp.find(nums2[i]) != mp.end() && mp[nums2[i]] != 0){
                mp[nums2[i]]--;
                ans.push_back(nums2[i]);
            }
        }
        return ans;    
    }
};