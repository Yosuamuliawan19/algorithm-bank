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
	int tc, n;
     vector<int> cards(52, 0);
     string s;
	cin >> tc;
     while (tc--){
          cin >> n;
          for (int i=0;i<52;i++) cards[i] = 0;
          for (int i=0;i<n;i++){
               int val = 0;
               cin >> s;
               if (s[0] == 'A'){
                    val = 1;
               }else if (s[0] == 'J'){
                    val = 11;
               }else if (s[0] == 'Q'){
                    val = 12;
               }else if (s[0] == 'K'){
                    val = 13;
               }else if(s.size() == 3){
                    val = 10;
               }else{
                    val = s[0] - '0';
               }
               val --;
               int back = s.size()-1;
               if (s[back] == 'S'){
                    val += 0;
               }else if (s[back] == 'H'){
                    val += 13;
               }else if (s[back] == 'D'){
                    val += 26;
               }else{
                    val += 39;
               }
               cards[val] ++;
               // cout << val << endl;
          }
          if (n < 52){
               cout << "INCOMPLETE\n";
               continue;
          }
          int disc = 0;
          bool incom = 0;
          for (int i=0;i<52;i++){
               if (cards[i] == 0){
                    incom = 1;
                    break;
               }else if (cards[i] > 1){
                    disc += (cards[i] - 1);
               }
          }
          if (incom){
               cout << "INCOMPLETE\n";
          }else{
               cout << "FULLHOUSE " << disc << endl;
          }
     }

	return 0;
}
