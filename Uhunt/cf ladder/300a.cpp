#include<bits/stdc++.h>
#define pii pair<int,int>
#define piii pair<pair<int, int> ,int>
#define pb push_back
#define fi first
#define se second
#define mp make_pair
typedef long long ll;
using namespace std;
int dirx[8] = {1,1,1,-1,-1,-1,0,0};
int diry[8] = {1,-1,0,1,-1,0,1,-1};
ll n, arr[110];

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     cin >> n;
     ll pos = 0, neg = 0;
     for (int i=0;i<n;i++){
          cin >> arr[i];
          if (arr[i] > 0) pos++;
          else if (arr[i] < 0) neg++;
     }
     sort(arr, arr +n);
     // for (int i=0;i<n;i++){
     //      cout << arr[i] << " ";
     // }

     vector<vector<int> > ans(3, vector<int>());
     if (neg == 1){
          cout << 1 << " " << arr[0] << "\n";
          cout << n-2;
          for (int i=2;i<n;i++) cout << " " << arr[i];
          cout << "\n1 0\n";
     } else if (neg == 2){
          cout << 1 << " " << arr[0] << "\n";
          cout << n-3;
          for (int i=3;i<n;i++) cout << " " << arr[i];
          cout << "\n2 0 "<< arr[1] << "\n";
     } else{
          cout << 1 << " " << arr[0] << "\n";
          cout << 2 << " " << arr[1] << " " << arr[2] << "\n";
          cout << n-3;
          for (int i=3;i<n;i++) cout << " " << arr[i];
          cout << "\n";
     }


     return 0;
}
