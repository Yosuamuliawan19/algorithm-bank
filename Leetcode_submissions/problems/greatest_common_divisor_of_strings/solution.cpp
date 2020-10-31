class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n = str1.length(), m = str2.length(); 
        int a = 0;
        while (str1[a] == str2[a] && a < min(n,m)) {         
            a++;
        }
        if (!a) return "";
        
        string substr = str1.substr(0, a) , ans = "";
        for (int i=a;i>=0;i--){
            if (n%(i+1) != 0 || m%(i+1) != 0 ) continue;
            // cout << substr << " "<< i + 1 << " " << a <<endl;
            int sz = i + 1, idx = 0;
            bool suc = 1;
            for (auto c: str1){
                // cout << c << " " << substr[idx] << " " << idx << endl;
                if (c == substr[idx]){
                    idx = (idx+1) % (sz);
                }else{
                    suc = 0; break;
                }
            }
            if (!suc) continue;
            // cout << "---" << idx << endl;
            for (auto c: str2){
                // cout << c << " " << substr[idx] << " " << idx << endl;
                if (c == substr[idx]){
                    idx = (idx+1) % (sz);
                }else{
                    suc = 0; break;
                }
            }
            // cout << "---" << idx << endl;
            if (suc) return substr.substr(0, i+1);        
        }
        return ans;
    }
    
};