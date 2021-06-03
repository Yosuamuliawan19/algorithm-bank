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

struct article{
     string name,title,subtitle;
     int vol,issue,year;
};
bool cmp(article a, article b){
     if (a.name != b.name){
          return a.name < b.name;
     }else if (a.year != b.year){
          return a.year < b.year;
     }else if (a.vol != b.vol){
          return a.vol < b.vol;
     }else if (a.issue != b.issue){
          return a.issue < b.issue;
     }else if (a.title != b.title){
          return a.title < b.title;
     }else {
          return a.subtitle < b.subtitle;
     }
}
vector<article> books;
int main(int argc, char const *argv[])
{
     int n;
     string a,b,c,d,e,f;
     scanf("%d\n", &n);
     for (int i=0;i<n;i++){
          getline(cin, a);
          getline(cin, b);
          getline(cin, c);
          getline(cin, d);
          getline(cin, e);
          getline(cin, f);
          int vol, issue, year;
          stringstream ss(d);
          ss >> vol;
          stringstream ss1(e);
          ss1 >> issue;
          stringstream ss2(f);
          ss2 >> year;
          // cout << vol << " " << issue << " " << year << endl;
          article cur;
          cur.vol = vol;
          cur.year = year;
          cur.issue = issue;
          cur.title = a;
          cur.subtitle = b;
          cur.name = c;
          books.pb(cur);
     }
     sort(books.begin(), books.end(), cmp);
     for (int i=0;i<n;i++){
          if (i != 0) cout << endl;
          article cur = books[i];
          cout << "title: " << cur.title << endl;
          cout << "subtitle: " << cur.subtitle << endl;
          cout << "journal info\n_name: " << cur.name << endl;
          cout << "_volume: " << cur.vol << endl;
          cout << "_issue: " << cur.issue << endl;
          cout << "_publication year: " << cur.year << endl;
     }

	return 0;
}
