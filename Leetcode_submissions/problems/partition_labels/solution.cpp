class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char, int> mn;
        map<char, int> mx;
        for (int i=0;i<s.length();i++){
            if (mn.find(s[i]) == mn.end()){
                mn[s[i]] = i;
            }else{
                mn[s[i]] = min(mn[s[i]], i);
            }
            
            if (mx.find(s[i]) == mx.end()){
                mx[s[i]] = i;
            }else{
                mx[s[i]] = max(mx[s[i]], i);
            }
        }
        vector<vector<int> > ranges; 
        vector<int> ans;
        for (auto cur: mn){
            ranges.push_back(vector<int>({mn[cur.first], mx[cur.first]}));
        }
        sort(ranges.begin(), ranges.end());
        
        for (int i=0;i<ranges.size();i++){
            int l = ranges[i][0], r = ranges[i][1];
            
            int j = i+1;
            while (j != ranges.size() && ranges[j][0] < r){
                l = min(l, ranges[j][0]);
                r  =max(r, ranges[j][1]);
                j++;
            }
            i = j-1;
            // cout << l << " " << r << endl;
            ans.push_back(r-l+1);
        }
        
        return ans;
    }
};