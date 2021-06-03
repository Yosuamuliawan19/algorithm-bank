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
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	vector <vector <pair < int , int > > > list(100000);
	vector <int> nums;
	for (int i = 0; i < n; ++i)
	{
		for (int i1 = 0; i1 < n ; i1 ++)
		{
			int x;
			cin >> x;
			nums.push_back(x);
			list[x].push_back(make_pair(i, i1));
		}
	}
	sort (nums.begin() , nums.begin() + n*n);
	int last = 100001;
	/*for (int i = 0; i < nums.size(); ++i)
	{
		cout << nums[i] ;
	}*/
	//cout << endl;
	for (int i = nums.size() -1; i >= 0; i--)
	{

		if (list[nums[i]].size() >= 2 && nums[i] != last){
			last = nums[i];
			//cout << i << " " << nums[i] << " more than 2 " <<endl;
			bool flag = false;
			for (int i1 = list[nums[i]].size() -1   ; i1 > 0; i1 --)
			{

				if (list[nums[i]][i1].first >= list[nums[i]][i1-1].first &&
					list[nums[i]][i1].second >= list[nums[i]][i1 -1].second &&
					(list[nums[i]][i1].second != list[nums[i]][i1 -1].second ||
					list[nums[i]][i1].first != list[nums[i]][i1-1].first )){
					flag = true;
				}
			}
			if (flag){
				cout << nums[i] << endl;
				break;
			}
		}
		if (i == 0){
			cout <<"-1" << endl;
		}
	}
	return 0;
}