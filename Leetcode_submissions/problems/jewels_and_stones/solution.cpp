class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans = 0;
        set<char> st;
        for (char c: jewels) st.insert(c);
        for (char c: stones) if (st.find(c) != st.end()) ans++;
        return ans;
    }
};