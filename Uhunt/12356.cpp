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
	int s , b;
	while (cin >> s >> b){
		vector<int> sol;
		if (s == 0 && b == 0){
			break;
		}
		for (int i = 1; i <= s; ++i)
		{
			sol.push_back(i);
		}

		for (int i = 0; i < b; ++i)
		{
			int l,r;
			cin >> l >> r;
			cout << sol.size();
			for (int i1 = 0; i1 < sol.size() ; i1 ++)
			{
				if (sol[i1] == l){
					cout << "haha" << endl;
				
					break;
				}
			}
			
 			for (int i1 = 0; i1 < sol.size() ; i1 ++)
			{
				cout << sol[i1] << " ";
			}
			cout << endl;
		}
	} 
	
	return 0;
}