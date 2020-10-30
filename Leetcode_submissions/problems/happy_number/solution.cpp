class Solution {
public:
    bool isHappy(int n) {
        set<int> st;
        while (n != 1){
            int next = 0, cur = n;
            while (cur != 0){
                next += (cur % 10) * (cur % 10);
                cur /= 10;
            }
            if (st.find(next) != st.end()) return 0;
            st.insert(next);
            n = next;
        }
        return 1;
    }
};