class Solution {
public:
    int countPrimes(int n) {
        if (n <= 1) return 0;
        vector<int> sieve(n, 1); 
        set<int> ans;
        sieve[0] = 1;
        sieve[1] = 1;
        for (int i=2;i<n;i++){
            if (sieve[i] == 1){
                for (int j=i*2;j<n;j+=i){
                    sieve[j] = 0;
                }
                // cout << i << endl;
                ans.insert(i);
            }
        }
        
        
        return ans.size();
    }
};