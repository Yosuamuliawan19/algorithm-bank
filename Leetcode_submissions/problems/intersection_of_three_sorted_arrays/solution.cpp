class Solution {
public:
    vector<int> arraysIntersection(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3) {
        map<int, int> st;
        for (int a: arr1) st[a] ++;
        for (int a: arr2) st[a] ++;
        for (int a: arr3) st[a] ++;
        arr3 = vector<int>();
        for (int a: arr1){
            if (st[a] == 3) arr3.push_back(a);
        }
        return arr3;
    }
};