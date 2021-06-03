#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     ll n;
     cin >> n;
     if (n%2==0)
     cout << (n / 2) - 1 << endl;
     else cout << floor((double)n/(double)2.0) << endl;
}
