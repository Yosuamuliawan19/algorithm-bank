class Solution {
public:
    string arr[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> st;
        for (string a: words){
            string cur = "";
            for (char c: a){
                cur += arr[c-'a'];
            }
            st.insert(cur);
        }
        
        return st.size();
    }
};