class Solution {
public:
    int arr[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int dayOfYear(string date) {
        int y = stoi(date.substr(0,4));
        int m = stoi(date.substr(5,2));
        int d = stoi(date.substr(8,2));
        if ((m > 2) && ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))){
            arr[1] = 29;
        }
        for (int i=1;i<m;i++){
            cout << arr[i-1] << endl;
            d += arr[i-1];
        }
        return d;
        
    }
};