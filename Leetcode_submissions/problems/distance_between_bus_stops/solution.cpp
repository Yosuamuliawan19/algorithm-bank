class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int a = 0, b = 0, n = distance.size();
        
        int cur = start;
        
        
        while (cur != destination){
            a += distance[cur];
            cur = (cur+1) % n;
        }
        
        cur = start;
        while (cur != destination){
            int idx = cur-1; if(idx == -1) idx = n-1;
            b += distance[idx];
            cur --;
            if (cur == -1) cur = n-1;
        }
        cout << a << " " << b << endl;
        
        return min(a,b);
    }
};