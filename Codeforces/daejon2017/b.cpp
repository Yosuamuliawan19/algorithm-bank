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
set<string> st;
bool check1(string s, char col, int a){
     int k = a / 4;
     for (int i=0;i<2;i++){
          int j = (k*4) + i;
          if (s[j] == col && s[j+1] == col && s[j+2] == col) return 1;
     }
     // cout << "horizontal pass\n";
     k = a % 4;
     for (int i=0;i<2;i++){
          int j = (i*4) + k;
          if (s[j] == col && s[j+4] == col && s[j+8] == col) return 1;
     }
     // cout << "vertical pass\n";
     // 3, 5;
     int cnt = 0;
     k = a;
     while (k < 16){
          if (s[k] == col) cnt ++;
          else break;
          // cout << k << endl;
          if ((k+3)/4 == k/4) break;
          k += 3;
     }
     k = a;
     while (k > 0){
          if (s[k] == col) cnt ++;
          else break;
          // cout << k << endl;
          if ((k-3)/4 == k/4) break;
          k -= 3;
     }
     cnt --;
     // cout << "cnt == " << cnt << endl;
     if (cnt >= 3) return 1;

     // 5
     // cout << "left diag pass " << cnt << "\n" ;
     cnt = 0;
     k = a;
     while (k < 16){
          if (s[k] == col) cnt ++;
          else break;
          // cout << k << endl;
          if (abs((k+5)/4 - k/4) != 4) break;
          k += 5;
     }
     k = a;
     while (k >= 0){
          if (s[k] == col) cnt ++;
          else break;
          // cout << k << endl;
          if (abs((k-5)/4 - k/4) != 1) break;
          k -= 5;
     }
     cnt --;
     // cout << "cnt == " << cnt << endl;

     if (cnt >= 3) return 1;
     // cout << "right diag pass " << cnt << "\n" ;
     return 0;

}
int A[4][4] = {0};
bool check(string s , int a){
     int y = a%4;
     int x = a/4;

     for (int i=0;i<4;i++){
          for (int j=0;j<4;j++){
               int k = (i*4) + j;
               A[j][i] = s[k];
          }
     }
    if(x-2>=0){
        if(A[y][x]==A[y][x-1] && A[y][x-1]==A[y][x-2] && A[y][x]==A[y][x-2]) return true;
    }
    if(x-2>=0 && y-2>=0){
        if(A[y][x]==A[y-1][x-1] && A[y-1][x-1]==A[y-2][x-2] && A[y][x]==A[y-2][x-2]) return true;
    }
    if(y-2>=0){
        if(A[y][x]==A[y-1][x] && A[y-1][x]==A[y-2][x] && A[y][x]==A[y-2][x]) return true;
    }
    if(x+2<=4 && y-2>=0){
        if(A[y][x]==A[y-1][x+1] && A[y-1][x+1]==A[y-2][x+2] && A[y][x]==A[y-2][x+2]) return true;
    }
    if(x+2<=4){
        if(A[y][x]==A[y][x+1] && A[y][x+1]==A[y][x+2] && A[y][x]==A[y][x+2]) return true;
    }
    if(x+2<=4 && y+2<=4){
        if(A[y][x]==A[y+1][x+1] && A[y+1][x+1]==A[y+2][x+2] && A[y][x]==A[y+2][x+2]) return true;
    }
    if(y+2<=4){
        if(A[y][x]==A[y+1][x] && A[y+1][x]==A[y+2][x] && A[y][x]==A[y+2][x]) return true;
    }
    if(x-2>=0 && y+2<=4){
        if(A[y][x]==A[y+1][x-1] && A[y+1][x-1]==A[y+2][x-2] && A[y][x]==A[y+2][x-2]) return true;
    }
    if(x-1>=0 && x+1<=4){
    	if(A[y][x-1]==A[y][x] && A[y][x]==A[y][x+1] && A[y][x-1]==A[y][x+1]) return true;
    }
    if(x-1>=0 && x+1<=4 && y-1>=0 && y+1<=4){
    	if(A[y-1][x-1]==A[y][x] && A[y][x]==A[y+1][x+1] && A[y-1][x-1]==A[y+1][x+1]) return true;
    }
    if(y-1>=0 && y+1<=4){
    	if(A[y-1][x]==A[y][x] && A[y][x]==A[y+1][x] && A[y-1][x]==A[y+1][x]) return true;
    }
    if(x-1>=0 && x+1<=4 && y-1>=0 && y+1<=4){
    	if(A[y+1][x-1]==A[y][x] && A[y][x]==A[y-1][x+1] && A[y+1][x-1]==A[y-1][x+1]) return true;
    }

    return false;
}


int x, a, b;

void print(string s){
     string x = "";
     for (int i=0;i<4;i++){
          string y = "";
          for (int j=0;j<4;j++){
               int k = (i*4) + j;
               if (k == a) y+='-';
               else y+=s[k];
          }
          x = y + "\n" + x;
     }
     cout << x << endl;
}
//2112121122010000
map<string,bool> m;
void solve(string x, char col){
     col = (col == '1'?'2':'1');
     // int cnt = 0;
     for (int i=0;i<4;i++){
          for (int j=0;j<4;j++){
               int k = (i*4) + j;
               if (x[k] == '0' && (k < 4 ||x[k-4] != '0')){
                    // cnt ++;
                    string y = x;
                    y[k] = col;
                    if (k == a){
                         if (check(y, a) && col == '1' ){
                              // print(y);
                              st.insert(y);
                              // m[y] = 1;
                         }
                    }
                    if (!check(y, k)){
                         // if (y == "2112212110212000")
                         // cout << k <<  " " << col << endl;
                         solve(y, col);
                    }

               }
          }
     }
     // cout << cnt << endl;
}
int main(int argc, char const *argv[])
{
     cin >> x >> a >> b;
     a = (a-1)*4 + (b-1);
     string s = "";
     for (int i=0;i<16;i++) s+="0";
     s[x-1] = '1';
     solve(s, '1');
     cout << st.size() << endl;
     // int cnt = 0;
     // for (map<string,bool>::iterator it=m.begin();it!=m.end();it++) cnt ++;
     // cout <<  cnt << endl;
     // print("2112210110212001");
     // if (check("2112210110212001", '1', 8)) cout << "hey\n";
	return 0;
}
