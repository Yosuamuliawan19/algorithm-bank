class Solution {
public:
    long long mx(long long a, long long b){
        if (a > b) return a;
        else return b;
    }
    long long mn(long long a, long long b){
        if (a < b) return a;
        else return b;
    }
    int maxArea(vector<int>& height) {
        long long ans = 0;
        int len = height.size();
        int l = 0, r = len-1;
        while (r > l){
            ans = mx(ans,  (r-l)*mn(height[l], height[r]));
            if (height[l] > height[r]){
                r --;
            }else{
                l++;
            }
        }
        
        return ans;
    }
};