class Solution {
public:
    string reorderSpaces(string text) {
        int cnt = 0, extra = 0;
        vector<string> words;
        string prev = "";
        
        
        for (int i=0;i<text.size();i++){
            if (text[i] == ' '){
                cnt++;
                if (prev != ""){
                    words.push_back(prev);
                    cout << prev << endl;
                } 
                prev = "";
            }else{
                prev += text[i];
            }
            
            if (i == text.size()-1 && text[i] != ' '){
                words.push_back(prev);
            }
        
        }
         string ans = "";
        if (words.size() == 1){
            ans += words[0];
             for (int i=0;i<cnt;i++) ans += " ";
            return ans;
        }
        extra = cnt % (words.size()-1);
        cnt /= (words.size()-1);
        
       
        for (int j=0;j<words.size();j++){
            ans += words[j];
            if (j!=words.size()-1)
            for (int i=0;i<cnt;i++) ans += " ";
        }
        for (int i=0;i<extra;i++) ans += " ";
    
        
        return ans;
    }
};