class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        double m = (double)arr.size() /(double) 4;
        int n = arr.size();
        int cnt = 0, prev = 0;
        
        
        for (int i=0;i<n;i++){
            
            if (arr[i] != prev){
                cnt = 1;
                prev = arr[i];
            }else{
                cnt ++;
            }
            if (cnt > m) return arr[i]; 
        }
        
        return arr[0];
        
    }
};