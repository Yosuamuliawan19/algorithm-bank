#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#define LL  long long
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
int n , k , t;
vector <int> subs;
int bc = 0;
void findMin(int cur , int ppl , int cost){
	if (cost >= bc) return;
	if (ppl == k){
		bc = cost;
		cout << bc << endl;
	}
	
	for (int i = cur; i < subs.size(); ++i)
	{
		findMin(cur + 1 , ppl + 1, cost + (subs[cur] - subs[i]));
	}
}
int main(int argc, char const *argv[])
{
	
	cin >> n >> k >> t;
	if (t <= 0){
		cout << -1 << endl;
	}
	for (int i = 0; i < n; ++i)
	{
		int temp;
		cin >> temp;
		subs.push_back(temp);
	}
	sort(subs.begin() , subs.end());

	/*
	int prev = subs[0];
	int count = 0;
	vector < pair < int ,int >  > tree;
	for (int i = 0; i < subs.size(); ++i)
	{
		if (subs[i] != prev ){
			tree.push_back(make_pair(prev, count));
			count = 1;
			prev = subs[i];
		}else{
			count ++;
		}
		if (i == subs.size() -1 ){
			tree.push_back(make_pair(subs[i], count));
		}
	}
	for (int i = 0; i < tree.size(); ++i)
	{
		cout << tree[i].first  << " " << tree[i].second << endl;
	}*/
	for (int i = subs.size(); i >= 0  ; i--)
	{
		if (subs[i] > t){
			bc += subs[i] - t;
		}
		if (subs[i] <= t) break;
	}
	for (int i = k; i < subs.size(); ++i)
	{
		if (subs[i] == subs[k-1]){
			cost +=1 
		}
	}
	cout << bc << endl;
	return 0;
}