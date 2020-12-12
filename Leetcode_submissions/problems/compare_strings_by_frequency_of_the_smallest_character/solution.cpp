class Solution {
public:
    int f(string s){
        int cnt = 0, smallest = 1000;
        for (char c: s){
            if (c < smallest){
                smallest = c;
                cnt = 1;
            }
            
            if (c==smallest)
            
            {
                cnt ++;
            }
        }
        return cnt;
    }
    
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int> arr, ans;
        for (int i=0;i<words.size();i++){
            arr.push_back(f(words[i]));
        }
        
        for (int j=0;j<queries.size();j++){
            int cur = f(queries[j]), cur_ans = 0;
            for (int i=0;i<arr.size();i++){
                if (cur < arr[i]) cur_ans++;
            }
            ans.push_back(cur_ans);
        }
        
        
        return ans;
    }
};