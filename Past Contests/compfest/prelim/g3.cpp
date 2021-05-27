#include<iostream>
// #include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include<map>
#include<climits>
#include<set>
#include<queue>
#include<string>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define FOR(i,a,b) for(int i=a;i<=b;i++)
const int sz = 1000100;
const int sz2 =100100;
int cnt[sz];
int arr[sz2];
int isPrime[sz];
int n, m;
void sieve(){
     for (int i=0;i<sz;i++) isPrime[i] = 1;
     isPrime[0] = isPrime[1] = 0;
     for (int i=2;i<sz;i++){
          if (isPrime[i]){
               for (int j=i*2;j<sz;j+=i){
                    isPrime[j] = 0;
               }
          }
     }
}
bool f = 0;
int ans = 1;
int idx = 0;
bool check(int x){
     if (idx != n-1 && x > arr[idx+1]) {
          return 1;
     }
     return 0;
}
int iter = 0;
void gen(int x){
     if (isPrime[x]){
          cnt[x]++;
          if (cnt[x] >= m){
               f = check(x);
               if (f){
                    ans = x;
               }
          }
     }else{
          for (int i=1;i<=sqrt(x);i++){
               iter ++;
               if (x%i == 0){
                    cnt[i]++;
                    if (x/i != i){
                         cnt[x/i]++;
                    }
                    if (cnt[x/i] >= m){
                         f = check(x/i);
                         ans = max(ans, x/i);
                         if (f){
                              // cout << x/i << endl;
                              ans = x/i;
                              break;
                         }
                    }
                    if (cnt[i] >= m){
                         f = check(i);
                         ans = max(ans, i);
                         if (f){
                              // cout << i << endl;
                              ans = i;
                              break;
                         }
                    }
               }
          }
     }
}
int main(int argc, char const *argv[])
{
     sieve();
	int tc;
	scanf("%d",&tc);
     while (tc--){
          for (int i=0;i<sz;i++) cnt[i] = 0;
          for (int i=0;i<sz2;i++) arr[i] = 0;
          f = 0;
          scanf("%d %d", &n, &m);
          for (int i=0;i<n;i++){
               cin >> arr[i];
          }
          sort(arr, arr+n, greater<int>());
          for (idx=0;idx<n;idx++){
               gen(arr[idx]);
               if (f) {
                    break;
               }
          }
          printf("%d\n", ans);
     }

	return 0;
}
