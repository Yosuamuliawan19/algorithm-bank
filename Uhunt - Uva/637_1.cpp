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
	ios_base::sync_with_stdio(false);
	int n;
	while (cin >> n){
          if (n == 1){
               cout << "Printing order for 1 pages:\nSheet 1, front: Blank, 1\n";
               continue;
          }
          if (n == 0) break;
          cout << "Printing order for " << n << " pages:\n";
          int size;
          if (n % 4 != 0)
          size = ((4 * (int)(n/4)) + 4)/2;
          else
          size = n / 2;
          vector<vector<int> > arr(2, vector<int>(size, -1));
          int val = 1;
          bool top = 1;
          for (int i=0;i<size;i++){
               if (val == n+1) break;
               arr[top][i] = val;
               top = !top;
               val++;
          }
          for (int i=size-1;i>=0;i--){
               if (val == n+1) break;
               arr[top][i] = val;
               top = !top;
               val++;
          }

          for (int i=0;i<size;i++){
               cout << "Sheet "<< (i+2)/2 << ", ";
               if (i % 2 == 0) cout << "front";
               else cout << "back ";
               cout << ": ";
               if (arr[0][i] == -1) cout << "Blank";
               else cout << arr[0][i];
               cout << ", ";
               if (arr[1][i] == -1) cout << "Blank";
               else cout << arr[1][i];
               cout << endl;
          }
     }

	return 0;
}
