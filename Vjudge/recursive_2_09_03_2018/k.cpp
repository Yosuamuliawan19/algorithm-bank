#include<iostream>
#include<vector>
#include<algorithm>
typedef long long ll;
using namespace std;
vector<ll> arr;
ll cnt = 0;
void merge(ll l, ll m, ll r){
     ll s1 = m - l + 1, s2 = r - m;
     int L[s1], R[s2];
     for (int i=0;i<s1;i++){
          L[i] = arr[l+i];
     }
     for (int i=0;i<s2;i++){
          R[i] = arr[m+1+i];
     }
     ll i = 0, j = 0, k = 0;
     while (i < s1 && j < s2){
          if (L[i] <= R[j]){
               arr[k++] = L[i++];
          }else{
               arr[k++] = R[j++];
               cnt ++;
          }
     }
     while (i < s1){
          arr[k++] = L[i++];
     }
     while (j < s2){
          arr[k++] = R[j++];
          cnt ++;
     }
}
void mergeSort(ll l, ll r){
     if (l < r){
          ll m = l + (r-l)/2;
          mergeSort(l, m);
          mergeSort(m+1, r);
          merge(l,m,r);
     }
}
int main (){
     // ios_base::sync_with_stdio(false);
	// cin.tie(0);
	// cout.tie(0);

     ll n;
     while (cin >> n){
          count = 0;
          arr = vector<ll>(n, 0);
          for (ll i=0;i<n;i++){
               cin >> arr[i];
          }
          mergeSort(0, n);
          cout << cnt << "\n";
     }
     return 0;
}
