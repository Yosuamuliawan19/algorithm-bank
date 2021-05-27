#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
int getsum(int temp ){
     int sum = 0;
     while (temp != 0) {
          sum += temp % 10;
          temp /= 10;
     }
     return sum;
}
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

     int x; cin >> x;
     while (getsum(x)%4 != 0){
          x++;
     }
     cout << x << endl;


     return 0;
}
