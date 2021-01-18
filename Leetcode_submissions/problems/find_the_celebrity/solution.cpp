/* The knows API is defined for you.
      bool knows(int a, int b); */

class Solution {
public:
    int findCelebrity(int n) {
        for (int i=0;i<n;i++){
            bool f = 1;
            for (int j=0;j<n;j++){
                 if (i == j) continue;
                if (knows(i,j)){
                    f = 0;
                    break;
                }
            }
            if (f) {
                int cnt = 0;
                for (int j=0;j<n;j++){
                    if (i == j) continue;
                    if (knows(j,i)){
                        cnt ++;
                    }
                }
                if (cnt == n-1) return i;
                
            }
        }
        return -1;
    }
};