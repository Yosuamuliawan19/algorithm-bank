class Solution {
public:
    int arr[250][250] = {0};
    string multiply(string num1, string num2) {
        int idx = 0;
        int rollover = 0, sum = 0;
        for (int i=num2.size()-1;i>=0;i--){
            sum = 0, rollover =0;
            int z = 0;
            for (int j=num1.size()-1;j>=0;j--){
                sum = rollover + ( (num1[j]-'0') * (num2[i]-'0') );
                rollover = 0;
                if (sum > 9){
                    rollover = sum/10;
                    sum = sum%10;
                }
                arr[idx][idx+(z++)]= sum;
            }
            arr[idx][idx+(z++)] = rollover;
            idx++;
        }
         // for (int i=0;i<20;i++){
         //    for (int j=0;j<20;j++){
         //        cout << arr[i][j] << " " ;
         //    }cout << endl;
         // }
        
        string ans = "";
        rollover = 0;
        for (int i=0;i<250;i++){
            sum = rollover; 
            rollover = 0;
            for (int j=0;j<250;j++){
                sum += arr[j][i];
            }
            if (sum > 9){
                rollover = sum/10;
                sum = sum%10;
            }
            ans += (sum+'0');
        }
        
        int tmp = ans.length()-1;
        while (tmp != -1 && ans[tmp] == '0'){
            tmp --;
        }
        ans = ans.substr(0, tmp+1);
        
        // 1 1 5        
        
//         000111
//         000011
            
//         000111
//         001110 
            
//         000011
//         000110
//         001100
        reverse(ans.begin(), ans.end());
        if (ans == "") return "0";
        return ans;
        
    }
};