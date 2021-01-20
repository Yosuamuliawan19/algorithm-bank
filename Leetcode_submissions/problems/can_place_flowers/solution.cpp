class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int cnt = 0;
        if (flowerbed.size() == 1){
            cnt += !flowerbed[0];
            return cnt >= n;
        }
        if (flowerbed.size() > 1 && flowerbed[0] == 0 && flowerbed[1] == 0){
            flowerbed[0] = 1;
            cnt ++;
        } 
        if (cnt >= n) return 1;
        if (flowerbed.size() > 2 && flowerbed[flowerbed.size()-1] == 0 && flowerbed[flowerbed.size()-2] == 0) {
            flowerbed[flowerbed.size()-1] = 1;
            cnt++;
        }
        if (cnt >= n) return 1;
        for (int i=1;i<flowerbed.size()-1;i++){
            if (flowerbed[i] == 0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0){
                cnt ++;
                flowerbed[i] = 1;
                if (cnt >= n) return 1;
            }
        }
        return 0;
    }
};