#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mp make_pair

ll tc, n, l, arr[100010];

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cin  >> tc;
     while (tc--){
          cin >> n >> l;
          for (int i=0;i<n;i++){
               cin >> arr[i];
          }

          double a = 0, b = l, c = 0;
          double as = 1, bs = 1;
          ll ai = 0, bi = n-1;
          double tot = 0;
          while (bi >= ai){
               double x = (double)(arr[ai] - a) / (double)as;
               double y = (double)(b - arr[bi]) / (double)bs;
               // cout << x << " " << y << endl;

               double t;
               if (x < y){
                    t = x;
               }else if (x > y){
                    t = y;
               }else{
                    t = x;
               }
               // cout << a << "-" << b << endl;
               // cout << t*as << "-" << t*bs << endl;
               b-= t*bs;
               a+= t*as;

               if (x < y){
                    ai ++; as++;
               }else if (x > y){
                    bi --; bs++;
               }else{
                    ai++; bi--; as++; bs++;
               }

               // cout << a << " " << b << endl;
               tot += t;
          }




          // cout << "ans\n";
          // cout << a << " " << as << " " <<  b << " " << bs << endl;
          cout << fixed << setprecision(7) << tot + (double)(b-a) / (double)(as+bs) << endl;
          // cout << "-----\n";


     }

     return 0;
}
