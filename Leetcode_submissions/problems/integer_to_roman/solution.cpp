class Solution {
public:
    int arr[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string arrStr[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    string intToRoman(int num) {
        int idx = 0;
        string ans = "";
        while (num > 0){
            if (num >= arr[idx]){
                ans += arrStr[idx];
                num -= arr[idx];
                // cout << arrStr[idx] << " " << arr[idx] << endl;
                
            }else{
                idx++;
            }
        }
        return ans;
    }
};