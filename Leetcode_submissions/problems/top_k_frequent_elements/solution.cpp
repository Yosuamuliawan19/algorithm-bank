class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        priority_queue<pair<int, int> > pq;
        
        int count = 0, prev = 0;
        for (int i=0;i<nums.size();i++){
            if (nums[i] != prev){
                if (i != 0){
                    cout << prev <<" " << count << endl;
                    pq.push(make_pair(count, prev));
                }
                prev = nums[i];
                count = 1;
            }else
            count ++;
            
            
            
            if(i == nums.size()-1){
                cout << prev <<" " << count << endl;
                pq.push(make_pair(count, prev));
            }
        }
        
        vector<int> ans; 
        while (k--){
            pair<int,int> cur = pq.top(); pq.pop();
            ans.push_back(cur.second);
        }
        return ans;
    }
};