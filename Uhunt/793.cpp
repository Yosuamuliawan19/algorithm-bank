#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include<sstream>
using namespace std;
vector<int> parent;
int findParent (int b){
	return (parent[b] == b )? b : (parent[b] = findParent(parent[b]))  ;
}
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	cin.ignore();

	for (int i = 0; i < n; ++i)
	{

		//cout << "tc "<< i+1 << endl;
		parent.clear();
		int q;
		cin >> q;
		//cout << q << endl;
		cin.ignore();
		for (int i2 = 0; i2 <= q; ++i2)
		{
			parent.push_back(i2);
		}
		int suc = 0;
		int unsuc = 0;
		for (int i1 = 0; ; i1 ++)
		{
			string line;
			getline(cin ,line);
			
			stringstream iss(line);
		//	cout << i1 << "haha" << endl;
			if (line.size() == 0)break;
			char a ;
			int b , c;
			iss >> a >> b >> c;

			if (a == 'c'){
				
				if (findParent(b) != findParent(c)){
					if (b > c){
						parent[findParent(c)] = b;
					}else{
						parent[findParent(b)] = c;
					}
				}
			}else{
				if (findParent(b) == findParent(c)){
					suc ++;
				}else{
					unsuc ++;
				}	
			}
		/*	cout << " parents " ;
			for (int i2 = 0; i2 < parent.size() ; i2 ++)
			{
				cout << parent[i2] << " ";
			}
			cout << endl;*/
			
		}
		cout << suc <<"," << unsuc << endl;
		if (i != n-1){
			cout << endl;
		}
	}
	return 0;
}