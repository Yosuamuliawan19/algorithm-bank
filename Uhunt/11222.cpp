#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include<map>

// #include <bits/stdc++.h>

#define LL  long long
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;



int main(int argc, char const *argv[])
{
	// ios_base::sync_with_stdio(false);
	int tc, n, cur;
	cin >> tc;
     for (int t=1;t<=tc;t++){
          map<int, int> m;
          for (int i=0;i<3;i++){
               cin >> n;
               for (int j=0;j<n;j++){
                    cin >> cur;
                    if (m.find(cur) == m.end()){
                         m[cur] = i;
                    }else{
                         m[cur] = -1;
                    }
               }
          }
          vector<vector<int> > arr(3);
          for (map<int,int>::iterator it=m.begin();it!=m.end();it++){
               if (it->second == -1) continue;
               arr[it->second].push_back(it->first);
          }
          int mx = -1, person;
          for (int i=0;i<3;i++){
               int cur = arr[i].size();
               if (cur > mx ){
                    mx = cur;
                    person = i;
               }
          }
          cout << "Case #" << t << ":\n";
          for (int p=0;p<3;p++){
               if (arr[p].size() == mx){
                    cout << p+1 << " " << mx;
                    for (int i=0;i<arr[p].size();i++){
                         cout << " " << arr[p][i];
                    }
                    cout << endl;
               }
          }


     }

	return 0;
}
