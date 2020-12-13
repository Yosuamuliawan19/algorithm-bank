class Solution {
public:
    double average(vector<int>& salary) {
        double mn = INT_MAX, mx = INT_MIN, sum = 0;
        for (int i: salary){
            mn = min(mn, (double)i);
            mx = max(mx, (double)i);
            sum += i;
        }
        return (sum-mx-mn) / (double)(salary.size()-2);
    }
};