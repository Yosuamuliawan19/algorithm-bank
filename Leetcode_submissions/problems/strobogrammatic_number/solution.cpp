class Solution {
public:
    
    bool isStrobogrammatic(string num) {
        string cur = "";
        for (int i=num.size()-1;i>=0;i--){
            if (num[i] == '6'){
                cur += '9';
            }else if (num[i] == '9'){
                cur += '6';
            }else if (num[i] == '1' || num[i] == '8' || num[i] == '0'){
                cur += num[i];
            }else{
                return 0;
            }
        }
        return num == cur;
    }
};