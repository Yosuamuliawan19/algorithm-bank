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
string s;
int B[101000] = {0}, R[101000] = {0}, diff[101000] = {0}, diff2[101000] = {0};
void solve()
{
    int max_so_far = INT_MIN, max_ending_here = 0;
    for (int i = 0; i < s.length(); i++)
    {
        max_ending_here = max_ending_here + diff[i];
	   cout << max_ending_here << endl;
        if (max_so_far < max_ending_here){
		   max_so_far = max_ending_here;
	   }
    }
    cout << max_so_far << endl;

}
int main(int argc, char const *argv[])
{
	cin >> s;
	if (s[0] == 'B') B[0] = 1;
	else R[0] = 1;
	diff[0] = 1;
	for (int i=1;i<s.length();i++){
		R[i] = R[i-1];
		B[i] = B[i-1];
		if (s[i] == 'B') B[i]++;
		else R[i]++;
		diff[i] = abs(R[i]-B[i]);
	}
	diff2[0] = 1;
	for (int i=1;i<s.length();i++){
		diff2[i] = diff[i] - diff[i-1];
		if (diff2[i] < 0){
			diff[i] = diff2[i];
		}
	}
	for (int i=0;i<s.length();i++){
		cout << R[i] << " " ;
	}cout <<endl;
	for (int i=0;i<s.length();i++){
		cout << B[i] << " " ;
	}cout <<endl;
	for (int i=0;i<s.length();i++){
		cout << diff[i] << " " ;
	}cout << endl;
	solve();

	return 0;
}
