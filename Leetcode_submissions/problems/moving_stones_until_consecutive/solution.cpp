class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        vector<int> in({a,b,c});
        sort(in.begin(), in.end());        
        vector<int> ans({0, (in[1]-in[0]-1) + (in[2]-in[1]-1)});
        if (in[1]-in[0] == 2 || in[2]-in[1] == 2){
            ans[0] = 1;
            return ans;
        } 
        
        if (in[1]-1 != in[0]) ans[0] ++;
        if (in[2]-1 != in[1]) ans[0] ++; 

        return ans;
    }
};