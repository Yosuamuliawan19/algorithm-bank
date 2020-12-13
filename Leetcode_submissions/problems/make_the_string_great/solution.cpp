class Solution {
public:
    string makeGood(string s) {
        string a = s;
        while (1){
            string b = "";
            for (int i=0;i<a.length();i++){
                if (i == a.length()-1){
                    b+=a[i];break;
                }
                if (abs(a[i]-a[i+1])== 32){
                    i++;
                }else{
                    b+=a[i];
                }
            }
            // cout <<a << " " << b<<endl;
            if (a == b) return a;
            a = b;
            if (a == "") break;
        }
        return a;
    }
};