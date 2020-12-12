class Solution {
public:
    int arr[30] = {0};
    int bitwiseComplement(int N) {
        if (N == 0) return 1;
        arr[0] = 1;
        int idx = 29;
        for (int i=1;i<30;i++){
            arr[i] = arr[i-1] * 2;
        }
        
        
        int ret = 0;
        string ans = "";
        int first = -1;
        while (idx != -1 && N >= 0){
            // cout << N << " " << arr[idx] << endl;
            if (N >= arr[idx]){
                ans += "1";
                N-=arr[idx];
                if (first == -1) first = ans.size()-1;
            }else{
                ans += "0";
            }
            idx--;
        }
        // cout << first << endl;
        ans = ans.substr(first, 30-first) ;
        // cout << ans << endl;
        
        
        
        for (int i=ans.size()-1;i>=0;i--){
            if (ans[i] == '0'){
                ret += arr[ans.size() -1-i];
            }
        }

        return ret;
    }
};