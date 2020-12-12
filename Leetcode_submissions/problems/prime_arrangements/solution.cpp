class Solution {
public:
    int numPrimeArrangements(int n) {
        long long mod = 7 + 1e9;
        int cnt = 0;
        long long ans = 1;
        vector<bool> isPrime(n+1, 1);
        for (int i=2;i<=n;i++){
            if (isPrime[i]){
                cout << i << endl;
                cnt ++;
                for (int j=i*2;j<=n;j+=i){
                    isPrime[j] = 0;
                }
            }
        }
        // cout << cnt << " " << n-cnt << endl;
        n = n-cnt;
        while(n){
            ans = ((ans%mod) * (n%mod))%mod;
            n--;
        }
        
        while(cnt){
            ans = ((ans%mod) * (cnt%mod))%mod;
            cnt--;
        }
        
        
        return ans%mod;
        
        
        
        
        
    
    }
};