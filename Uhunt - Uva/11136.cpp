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
#include<set>
#include<queue>



typedef long long ll;
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;



int main(int argc, char const *argv[])
{
	ll n, m , cur;
     while (cin >> n){
          set<pair<ll,ll> > st;
          if (!n) break;
          ll ans = 0;
          ll idx = 0;
          for (ll i=0;i<n;i++){
               cin >> m;
               for (ll j=0;j<m;j++){
                    cin >> cur;
                    st.insert(make_pair(cur, idx++));
               }
               ans += ((st.rbegin())->first - (st.begin())->first);
               set<pair<ll,ll> >::iterator b = st.end();
               set<pair<ll,ll> >::iterator a = st.begin();
               st.erase(a);
               st.erase(--b);
          }
          cout << ans  << endl;


     }

	return 0;
}
