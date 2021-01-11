class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        int offset = 0;
        for (vector<int> cur: shift){
            
            if (cur[0] == 0){
                offset += (-1) * (cur[1]);
            }else{
                offset += (1) * (cur[1]);
            }
            // cout << offset << endl;
        }
        if (offset > 0){
            offset = offset % s.length();
            cout << offset << endl;
            s = s.substr(s.length()-abs(offset), abs(offset)) + s.substr(0, s.length()-abs(offset));
        }else if (offset < 0){
            offset = -(-offset % s.length());
            cout << offset << endl;
            s = s.substr(abs(offset), s.length()-abs(offset)) + s.substr(0, abs(offset));
        }
        return s;
    }
};