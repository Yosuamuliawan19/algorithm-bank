class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if ((int)strs.size() == 0) return "";
        int shortest = INT_MAX;
        for (int j=0;j<(int) strs.size();j++){
            if (strs[j].length() < shortest){
                shortest = strs[j].length();
            }
        }
        string ans = "";
        for (int i=0;i<shortest;i++ ){
            char a = strs[0][i];
            for (int j=1;j<(int)strs.size();j++){
                if (strs[j][i] != a) return ans;
            }
            ans += a;
        }
        return ans;
    }
};