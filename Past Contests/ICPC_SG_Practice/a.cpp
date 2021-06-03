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
     #include<sstream>
     #include<climits>
     #include<set>
     #include<stack>
     #include<queue>
     #include<string>
     using namespace std;
     // #include <bits/stdc++.h>
     typedef long long ll;
     typedef pair<int,int> ii;
     typedef vector<ii> vii;
     typedef vector<int> vi;
     #define pb push_back
     #define fi first
     #define se second
     #define mp make_pair
     #define FOR(i,a,b) for(int i=a;i<=b;i++)



     int main(int argc, char const *argv[])
     {
          //helopooooooooo
     	ll m,n,t;
          cin >> m >> n >> t;
          if (n > m){
               cout << "TLE\n";
               return 0;
          }
          ll tot = n;
          if (t == 1){
               while (tot <= m){
                    n--;
                    if (n == 0) break;
                    tot *= n;
               }
               // cout << tot << endl;
               if (tot > m){
                    cout << "TLE\n";
               }else{
                    cout << "AC\n";
               }
          }else if (t == 2){
               if (pow(2, n) > m){
                    cout << "TLE\n";
               }else{
                    cout << "AC\n";
               }
          }else if (t == 3){

               for (int i=0;i<3;i++){
                    tot *= n;
                    if (tot > m) break;
               }
               // cout << tot << " " << m << endl;
               if (tot > m){
                    cout << "TLE\n";
               }else{
                    cout << "AC\n";
               }
          }else if (t == 4){
               for (int i=0;i<2;i++){
                    tot *= n;
                    if (tot > m) break;
               }
               if (tot > m){
                    cout << "TLE\n";
               }else{
                    cout << "AC\n";
               }
          }else if (t == 5){
               tot *= n;
               if (tot > m){
                    cout << "TLE\n";
               }else{
                    cout << "AC\n";
               }
          }else if (t == 6){
               double x = n * log2(n);
               if (x > m){
                    cout << "TLE\n";
               }else{
                    cout << "AC\n";
               }
          }else{
               if (n > m){
                    cout << "TLE\n";
               }else{
                    cout << "AC\n";
               }

          }
     	return 0;
     }
