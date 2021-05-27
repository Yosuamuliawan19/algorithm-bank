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
#include<set>
#include<queue>

typedef long long ll;
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;

string in , out;

void dfs(string a, string b, string st, string path){
     if (b.length() == out.length()){
          cout << path.substr(1,path.length()-1) << endl;
          return ;
     }
     if (a.length() > 0){
          dfs(a.substr(1, a.length()-1) , b, st+a[0], path + " i");
     }
     if (st.length() > 0 && st[st.length()-1] == out[b.length()]){
          dfs(a, b + st[st.length()-1], st.substr(0,st.length()-1), path + " o");
     }x
}
int main(int argc, char const *argv[])
{
	while (cin >> in >> out){
          cout << "[\n";
          dfs(in, "", "", "");
          cout << "]\n";
     }
	return 0;
}
