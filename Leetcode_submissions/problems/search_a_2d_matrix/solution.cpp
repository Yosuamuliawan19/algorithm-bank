class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        if (arr.size() == 0 ||  arr[0].size() == 0 ) return 0;
        int m = arr.size(), n = arr[0].size();
       
        // find row
        int l = 0, r = m-1;
        int row = l + (r-l)/2;
        // printf("row\n");
        while (r>l){
            row = l + (r-l)/2;
            // printf("%d %d %d\n", arr[row][n-1], l , r);
            if (arr[row][n-1] == target) return 1;
            else if (arr[row][n-1] > target){
                r = row;
            }else{
                l = row +1;
            }
        }
        row = l;
        if (arr[row][n-1] == target) return 1;
        // cout << l << " " << row << " " << r << endl;
        
        printf("row %d\n", row);
        
        l = 0, r = n-1;
        while (r>= l){
            int col = l + (r-l)/2;
            // cout << l << " " << col << " "<< r << endl;
            if (arr[row][col] == target) return 1;
            else if (arr[row][col] > target){
                r = col-1;
            }else{
                l = col+1;
            }
        }
        return 0;
    }
};