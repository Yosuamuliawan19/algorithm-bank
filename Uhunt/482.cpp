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



int main()
{
	int tc;
     string s;
	cin >> tc;
     int t = 0;
     while (tc--){
          cin.ignore();
          cin.ignore();
          getline(cin,s);
          vector<int> idx;
          int tmp = 0;
          for (int i=0;i<s.length();i++){
               if (s[i] != ' '){
                    tmp = tmp*10 + (s[i]-'0');
               }
               if (s[i] == ' ' || i == s.length()-1){
                    idx.push_back(tmp);
                    tmp = 0;
               }
          }
          t++; if(t!=1)cout <<endl;
          vector<string> vals(idx.size());
          for (int i=0;i<idx.size();i++){
               cin >> vals[i];
          }
          vector<string> newvals(idx.size());
          for (int i=0;i<idx.size();i++){
               newvals[idx[i]-1] = vals[i];
          }
          for (int i=0;i<idx.size();i++){
               cout << newvals[i] << endl;
          }






     }

	return 0;
}
