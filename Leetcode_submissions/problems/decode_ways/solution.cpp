class Solution {
public:
    int numDecodings(string s) {
       
        vector<int> arr(s.length(), 0);
        for (int i=0;i<s.length();i++){
            if (i >= 1){
                if (s[i-1] == '1' || s[i-1] == '2' && s[i] <= '6'){
                    if (s[i] != '0') arr[i] = arr[i-1]; 
                    if (i >= 2) arr[i] += arr[i-2];
                    else arr[i] += 1;
                }else if (s[i] != '0'){
                    arr[i] = arr[i-1];
                }
            }else{
                if (s[i] != '0'){
                    arr[i] = 1;
                }
            }
            // cout << s[i] << " "  << arr[i] << endl;
        }
        // cout << arr.size() << endl;
        return arr[s.length()-1];
    }
};