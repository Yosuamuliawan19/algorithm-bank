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
	int tc,t,n;
	cin >> tc;
     cin.ignore();
     while (tc--){
          cin >> t >> n;
          int a,b,c,d;
          for (int i=0;i<t;i++){
               bool can = 1;
               cin >> a >> b >> c >> d;
               if ((a%2 != b%2) != (c%2 != d%2)) cout << "no move\n";
               else if (abs(a-c) == abs(d-c)){
                    cout << "1\n";
               }else{
                    int x = abs(c-a)+1/2;
                    int y = abs(d-b)+1/2;
                    // cout << x <<" " << y << endl;
                    if (max(a,c)+1 <= n
                    || min(a,c)-1 >= 1
                    || max(b,d)+1 <= n
                    || min(b,d)-1 >= 1
                    ){
                         cout << "2\n";
                    }else{
                         cout << "no move\n";
                    }
               }
          }
     }

	return 0;
}
