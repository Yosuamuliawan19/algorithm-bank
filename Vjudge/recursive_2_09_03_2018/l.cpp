#include<iostream>
#include<vector>
typedef long long ll;
using namespace std;
ll n, arr[100001], cnt = 0;
void merge(ll l, ll m, ll r){
     ll s1 = m - l + 1, s2 = r -m;
     ll L[s1], R[s2];
     for (int i=0;i<s1;i++){
          L[i] = arr[l+i];
     }
     for (int i=0;i<s2;i++){
          R[i] = arr[m+i+1];
     }
     ll i=0,j=0,k=l;

     while (i < s1 && j < s2){
          if (L[i] <= R[j]){
               arr[k++] = L[i++];
          }else{
               arr[k++] = R[j++];
               cnt += (s1 -i);
          }
     }
     while (i < s1){
          arr[k++] = L[i++];
     }
     while (j < s2){
          arr[k++] = R[j++];
     }
}
void mergeSort(ll l, ll r){
     if (r > l){
          ll m = l + (r-l)/2;
          mergeSort(l,m);
          mergeSort(m+1,r);
          merge(l,m,r);
     }
}
int main (){
     while (cin >> n){
          if (n == 0) break;
          cnt = 0;
          for (int i=0;i<n;i++){
               cin >> arr[i];
          }
          mergeSort(0, n-1);
          if (cnt % 2 == 0){
               cout << "Carlos\n";
          }else{
               cout << "Marcelo\n";
          }
     }
     return 0;
}
