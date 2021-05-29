#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include<math.h>

// #include <bits/stdc++.h>

#define LL  long long
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;



int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	int tc;
	cin >> tc;
     char a; int b, c;
     while (tc--){
          cin >> a >> b >> c;
          if (b > c){
               int tmp = b;
               b = c;
               c = tmp;
          }
          if (a == 'r' ){
               cout << b <<endl;
          }else if (a == 'k'){
               int tot = 0;
               int x = floor((double)b/2);
               int y = ceil((double)b/2);
               // cout << x << " "<< y<<endl;
               for (int i=0;i<c;i++){
                    if (i % 2 == 0){
                         tot += y;
                    }else{
                         tot += x;
                    }
               }
               cout << tot <<endl;
          }else if (a == 'K'){
               cout << (ceil((double)b/2)*ceil((double)c/2)) << endl;
          }else if (a == 'Q'){
               cout << b << endl;
          }
     }

	return 0;
}
