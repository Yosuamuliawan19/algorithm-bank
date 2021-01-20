class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> st;
        for (int a: candyType) st.insert(a);
        return min(candyType.size()/2, st.size());
    }
};