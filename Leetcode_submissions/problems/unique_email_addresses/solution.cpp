class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> st;
        
        for (string current: emails){
            string stored = "";
            bool ignored = 0;
            for (int i=0;i<current.length();i++){
                if (current[i] == '@'){
                    stored += current.substr(i, current.length()-i+1);
                    break;
                }
                if (current[i] == '.' || ignored) continue;
                if (current[i] == '+'){
                    ignored = 1;
                }else{
                    stored += current[i];
                }
                
            }
            // cout << stored << " " << current << endl;
            st.insert(stored);
        } 
        
        return st.size();
    }
};