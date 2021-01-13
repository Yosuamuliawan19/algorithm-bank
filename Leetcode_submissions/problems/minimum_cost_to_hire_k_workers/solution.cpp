class Solution {
public:
    static bool cmp(vector<double> a, vector<double> b){
        if (a[1] == b[1]){
            return a[0] <= b[0];
        }
        return a[1] <= b[1];
        
    }
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int K) {
        vector<vector<double>> arr;
        
        double total = 0;
        for (int cur: quality){
            total += cur;
        }
        for (int i=0;i<quality.size();i++){
            arr.push_back(vector<double>({(double) quality[i], (double) wage[i] / (double) quality[i]}));
            // printf("parts %d , wage per part %.6f\n", quality[i],(double) wage[i] / (double) quality[i]);
        }
        sort(arr.begin(), arr.end(), cmp);
        
        
        int sum = 0;
        double ans = DBL_MAX;
        priority_queue<int> pq;
         // for (vector<double> cur: arr){
         //    printf("parts %.1f , wage per part %.6f\n", cur[0], cur[1]);
         // }
        for (int i=0;i<arr.size();i++){
            pq.push((int)arr[i][0]);
            sum += (int) arr[i][0];
            // printf("sum %d\n", sum );
            if (pq.size() > K){
                // printf("poping %d\n", pq.top());
                 sum -= pq.top(); pq.pop();
            }
            // printf("pqsize %d\n",pq.size() );
            if (pq.size() == K) {
                // printf("%.6f %d \n",arr[i][1], sum);
                ans = min(ans, (sum * arr[i][1]));
            }
        }
        
        
       
        return ans;
    }
};

// take wage from biggest wage per part
// will be more than the smaller wages2