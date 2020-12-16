class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& iv, vector<int>& in) {
        if (iv.size() == 0) return vector<vector<int>>({in});
        vector<vector<int>> ans;
        bool f = 1;
        for (int i=0;i<iv.size();i++){
            f = 0;
            if (iv[i][1] >= in[0] && iv[i][0] <= in[1]){
                iv[i][0] = min(iv[i][0], in[0]);
                iv[i][1] = max(iv[i][1], in[1]);
                f = 1;
            }
                
            if (f){
                int j = i+1;
                while (j != iv.size() && iv[j][0] <= iv[i][1]){
                    iv[i][0] = min(iv[i][0], iv[j][0]);
                    iv[i][1] = max(iv[i][1], iv[j][1]);
                    j++;
                }
                for (int z=0;z<=i;z++){
                    ans.push_back(iv[z]);
                }
                for (int z=j;z<iv.size();z++){
                    ans.push_back(iv[z]);
                }
                break;
            } 
        }
        if (!f){
            iv.push_back(in);
            sort(iv.begin(), iv.end());
            return iv;
                
        }
        return ans;
    }
};