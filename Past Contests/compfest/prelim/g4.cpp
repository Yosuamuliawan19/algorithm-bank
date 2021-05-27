
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
template <class T>
inline bool getnum (T& x) {short sign = 1;x = 0;char c;do c = getchar(); while (c == ' ' || c == '\n');if (c == EOF) return false;if (c == '-') sign = -1;else x = c - '0';for (c = getchar(); '0' <= c && c <= '9'; (x = x * 10 + c - '0', c = getchar()));x *= sign;return true;}

template <class T>
inline bool _R (T& x)                  {return (bool) (cin >> x);}
inline bool _R (int& x)                {return getnum (x);}
inline bool _R (unsigned& x)           {return getnum (x);}
inline bool _R (long long& x)          {return getnum (x);}
inline bool _R (unsigned long long& x) {return getnum (x);}
inline bool _R (double& x)             {return scanf ("%lf", &x);}
inline bool _R (char& x)               {return scanf ("%c", &x);}
inline bool _R (char* x)               {return scanf ("%s", x);}

template <class T>
inline bool _W (const T& x)                  {return cout << x;}
inline bool _W (const int& x)                {return printf ("%d", x);}
inline bool _W (const long long& x)          {return printf ("%lld", x);}
inline bool _W (const unsigned long long& x) {return printf ("%llu", x);}
inline bool _W (const double& x)             {return printf ("%.16f", x);}
inline bool _W (const char& x)               {return putchar (x);}
inline bool _W (const char* x)               {int i = 0; while (x[i]) if (!putchar (x[i++])) return false; return true;}
inline bool _W (const string& x)             {int i = 0; while (x[i]) if (!putchar (x[i++])) return false; return true;}

template<class T, class U>
inline bool _W (const pair<T, U>& x)
{_W (x.first); putchar (' '); _W (x.second); return true;}

template<class T>
inline bool _W (const vector<T>& x)
{for (typename vector<T>::iterator i = x.begin(); i != x.end(); _W (*i++)) if (i != x.cbegin()) putchar (' '); return true;}


#define _M1(T,a)                 (T(a))
#define _M2(T,a,b)               (T(a) && _M1(T,b))
#define _M3(T,a,b,c)             (T(a) && _M2(T,b,c))
#define _M4(T,a,b,c,d)           (T(a) && _M3(T,b,c,d))
#define _M5(T,a,b,c,d,e)         (T(a) && _M4(T,b,c,d,e))
#define _M6(T,a,b,c,d,e,f)       (T(a) && _M5(T,b,c,d,e,f))
#define _M7(T,a,b,c,d,e,f,g)     (T(a) && _M6(T,b,c,d,e,f,g))
#define _M8(T,a,b,c,d,e,f,g,h)   (T(a) && _M7(T,b,c,d,e,f,g,h))
#define _M9(T,a,b,c,d,e,f,g,h,i) (T(a) && _M8(T,b,c,d,e,f,g,h,i))

#define GET_MACRO(_1,_2,_3,_4,_5,_6,_7,_8,_9,NAME,...) NAME
#define read(...) GET_MACRO(__VA_ARGS__,_M9,_M8,_M7,_M6,_M5,_M4,_M3,_M2,_M1)(_R,__VA_ARGS__)
#define write(...) GET_MACRO(__VA_ARGS__,_M9,_M8,_M7,_M6,_M5,_M4,_M3,_M2,_M1)(_W,__VA_ARGS__)
#define writeln(...) write(__VA_ARGS__,'\n')
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define FOR(i,a,b) for(int i=a;i<=b;i++)
int tc,n,m;
const int sz = 1000010;
const int sz2 =100010;
int cnt[sz];
int arr[sz2];
int isPrime[sz];
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
int ans = 1;
int idx = 0;
bool check(int x){
     if (cnt[x] >= m){
          ans = max(ans, x);
     }
     if(idx != n-1 && x > arr[idx+1] && cnt[x] >= m) {
          ans = x;
          return 1;
     }
     return 0;
}
int i;
int main(int argc, char const *argv[])
{
     sieve();
     read(tc);
     while (tc--){
          for (i=0;i<sz;i++) cnt[i] = 0;
          ans = 1; idx = 0;
          read(n,m);
          for ( i=0;i<n;i++){
               read(arr[i]);
          }
          sort(arr,arr+n,greater<int>());
          for (idx=0;idx<n;idx++){
               if (isPrime[arr[idx]]){
                    cnt[arr[idx]] ++;
                    if (check(arr[idx])) break;
               }
               int x = arr[idx];
               for ( i=1;i*i<=arr[idx];i++){
                    if (x%i == 0){
                         cnt[i]++;
                         if (check(i)) break;
                         if (x / i != i){
                              cnt[x/i]++;
                              if(check(x/i)) break;
                         }
                    }
               }
          }
          write(ans);
          write("\n");
     }

	return 0;
}
