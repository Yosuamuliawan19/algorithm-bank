#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
// #include <bits/stdc++.h>

#define LL  long long
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;



int main(int argc, char const *argv[])
{
	int tc;
	cin >> tc;
     int t =1;
     while (tc--){
          int y = 0;
          vector<string> deck(53,"");
          for (int i=1;i<=52;i++){
               cin >> deck[i];
          }
          int cnt = 0;
          int z = 0;
          for (int i=27;i>=1;i--){
               cnt ++; if (cnt == 4){
                    // cout << i << endl;
                    z = i;
                    break;
               }
               int x;
               if (deck[i][0] >= '2' && deck[i][0] <= '9'){
                    x = (deck[i][0]-'0');
               }else{
                    x = 10;
               }
               y+=x;
               i = i - (10-x);
          }
          // cout << y << endl;
          cout << "Case " << t++ << ": ";
          if (y > z){
               y -= z;
               y += 27;
               cout << deck[y] << endl;
          }else{
               cout << deck[y] << endl;
          }
     }

	return 0;
}
