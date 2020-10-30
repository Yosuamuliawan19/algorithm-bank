class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        set<int> st;
        for (int i=0;i<nums1.size();i++){
            st.insert(nums1[i]);
        }
        int prev = 0;
        sort(nums2.begin(),nums2.end());
        for (int i=0;i<nums2.size();i++){
            cout << nums2[i] << endl;
            if (prev != nums2[i]){
                cout << prev<< "-"<< endl;
                if (i != 0){
                    if (st.find(prev) != st.end()){
                        ans.push_back(prev);
                    }
                }
                prev = nums2[i];
            }
            
            if (i==nums2.size()-1){
                cout << prev<< "-" << endl;
                if (st.find(prev) != st.end()){
                    ans.push_back(prev);
                }
            }
        }
        return ans;
        
    }
};