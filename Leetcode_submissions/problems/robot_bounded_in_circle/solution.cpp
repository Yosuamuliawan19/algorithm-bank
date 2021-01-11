class Solution {
public:
    int dirx[4] = { 1, 0, -1, 0};
    int diry[4] = { 0, 1, 0, -1};
    bool isRobotBounded(string instructions) {
        int x = 0, y = 0;
        int idx = 0;
        for (int i=0;i<5;i++){
            for (char cur: instructions){
                if (cur == 'G'){
                    x += dirx[idx];
                    y += diry[idx];
                }else if (cur == 'L'){
                    idx --;
                    if (idx == -1) idx = 3;
                }else if (cur == 'R'){
                    idx ++;
                    if (idx == 4) idx = 0;
                }
            }
            if (x == 0 && y == 0) return 1;
        }
        
            
        return (x == 0) && (y == 0);
    }
};