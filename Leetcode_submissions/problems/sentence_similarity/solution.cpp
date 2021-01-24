class Solution {
public:
    bool areSentencesSimilar(vector<string>& sentence1, vector<string>& sentence2, vector<vector<string>>& similarPairs) {
        if (sentence1.size() != sentence2.size()) return false;
        set<pair<string, string>> st;
        for (vector<string> a: similarPairs){
            st.insert(make_pair(a[0], a[1]));
            st.insert(make_pair(a[1], a[0]));
        }
        
        for (int i=0;i<sentence1.size();i++){
            if (sentence1[i] != sentence2[i]){
                if (st.find(make_pair(sentence1[i], sentence2[i])) == st.end()) return 0;
            }
        }
        return 1;
    }
};