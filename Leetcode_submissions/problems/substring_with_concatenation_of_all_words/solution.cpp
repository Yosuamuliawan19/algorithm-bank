class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> ans;
    
        unordered_map<string, int> freq; 
        for (auto word : words) freq[word]++;
        
        int len = words[0].length(), n = s.length(), count = words.size();
        
        for (int i=0;i<n -count*len+1;i++){
            int found = 0;
            unordered_map<string, int> seen = freq;
            for (int j=i;j<j+count*len+1;j+=len){
                string cur = s.substr(j, len);
                if (freq.find(cur) != freq.end() && --seen[cur] >= 0){
                    found ++;              
                }else{
                    break;
                }
            }
            if (found == count){
                ans.push_back(i);
            }
        }

        
        return ans;
    }
};