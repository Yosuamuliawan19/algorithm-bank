class Solution {
public:
    double trimMean(vector<int>& arr) {
        int margin = arr.size() * 5.0 / 100.00;
       
        sort(arr.begin(), arr.end());
        double sum = 0;
        for (int i=margin; i<arr.size()-margin;i++){
            sum += arr[i];
        }
        sum /=(double) (arr.size()-margin-margin);
        return sum;
    }
};