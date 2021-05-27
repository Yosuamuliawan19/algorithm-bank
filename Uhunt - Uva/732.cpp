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
#include<stack>
#include<queue>

typedef long long ll;
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;



int main(int argc, char const *argv[])
{
	string s1,s2;
     while(cin >> s1 >> s2){
          cout << s1 << " " << s2 << endl;
          stack<char> s;
          string s3=s1,s4=s2;
          sort(s3.begin(),s3.end());
          sort(s4.begin(),s4.end());
          if (s3 != s4){
               cout << "[\n]\n"; break;
          }
          int i = 0, j = 0, ln = s1.length();
          s3 = "";
          while (1){
               while (s1[i] != s2[j]){
                    s.push(s1[i]);
                    cout << "i ";
                    i++;
                    if (i == ln) break;
               }
               while (s1[i] == s2[j]){
                    i++;j++;
                    cout << "i o ";
               }
               while (!s.empty() && s.top() == s2[j]){
                    j++;
                    s.pop();
                    cout << "o ";
               }
               cout << endl;
               if (j == ln) break;
               // cout << s1 << " " << s2 << " " << s3 << endl;
               break;
          }
     }

	return 0;
}
