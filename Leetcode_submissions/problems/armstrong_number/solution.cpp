class Solution {
public:
    bool isArmstrong(int N) {
        int M = N, cnt = 0, sum = 0;
        vector<int> arr;
        while (N != 0){
            arr.push_back(N%10);
            N /= 10;
            cnt ++;
        }
        for (int num: arr){
            sum += pow(num, cnt);
        }
        return sum == M;
    }
};