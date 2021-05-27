
#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
typedef long long ll;
ll n,m,q,arr[30100000],mat[30100000]={0},cur,i;
const ll mod = 30000000;
int main()
{
     scanf("%lld %lld %lld",&n,&m,&q);
     for (i=1;i<=m;i++){
          scanf("%lld",&arr[i]);
          mat[arr[i]] ++;
          if (i != 1){
               arr[i-1+m] = (arr[i] + arr[i-1])%mod;
               mat[arr[i-1+m]] ++;
          }
     }
     for (i=2*m;i<=n;i++){
          // cout << i << " " << i-m << " " << i-m+1 << endl;
          arr[i] = (arr[i-m] + arr[i-m+1]) % mod;
          mat[arr[i]] ++;
     }
     int idx = 0;
     for (int i=0;i<30100000;i++){
          while (mat[i]--) arr[idx++] = i;
     }
     for (int i=0;i<q;i++){
          scanf("%lld",&cur);
          printf("%lld\n", arr[cur-1]);
     }

	return 0;
}
