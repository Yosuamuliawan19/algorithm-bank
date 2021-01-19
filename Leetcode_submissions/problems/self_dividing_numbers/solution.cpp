class Solution {
public:
    bool check(int a){
        int b = a;
        while (a != 0){
            if (a%10 == 0) return 0;
            if ((b % (a%10)) != 0) return 0;
            a /= 10;
        }
        return 1;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for (int i=left;i<=right;i++){
            if (check(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};