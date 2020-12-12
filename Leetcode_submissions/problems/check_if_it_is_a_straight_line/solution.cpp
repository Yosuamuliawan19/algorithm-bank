class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& in) {
        // if (in[0][1] == in[1][1]){
        //     for (int i=0;i<in.size()-1;i++){
        //         if (in[i][1] != in[i+1][1]) return 0;
        //      }
        //     return 1;
        // }
        // if (in[0][0] == in[1][0]){
        //     for (int i=0;i<in.size()-1;i++){
        //         if (in[i][0] != in[i+1][0]) return 0;
        //     }
        //     return 1;
        // }
        bool flag = 0;
        double rs = in[0][1] - in[1][1], rn = in[0][0] - in[1][0];
        if (rn == 0) flag = 1;
        for (int i=0;i<in.size()-1;i++){
            double a = in[i][1] - in[i+1][1], b = in[i][0] - in[i+1][0];
            if (b == 0) flag = 1;
            if (flag) {
                if (rn != b) return 0;
            }
            else if (a/b != rs/rn){
                return 0;
            }
        }
        return 1;
    }
};