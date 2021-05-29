#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int n , q;
	while (cin >> n ){
		if (n == 0)break;
		cin >> q;


		int prev = 0;
		int prevstart = 0;
		int total = 1;

		vector < pair <int, pair < int,int > > > nodes;
		nodes.clear();
		int temp;
		cin >> prev;
		for (int i = 1; i < n; ++i)
		{
			int temp;
			cin >> temp;
			if (temp != prev){
				prev = temp;
				nodes.push_back(make_pair(total,make_pair(prevstart, i - 1)));
				total = 1;
				prevstart = i;
				continue;
			}else{
				total ++;
			}

			if (i == n -1 ){
				nodes.push_back(make_pair(total,make_pair(prevstart, i - 1)));
			}
		}
		for (int i = 0; i < nodes.size(); ++i)
		{
			cout << nodes[i].first << " " << nodes[i].second.first << " " << nodes[i].second.second << endl;
		}

		
	}



	return 0;
}