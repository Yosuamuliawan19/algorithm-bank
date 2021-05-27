#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int x , y;
int cnt = 0;
vector<string> lst;
void rec(int s , string cur){
	if (cnt == y) return;
	if (s == cur.length() - 1){
		lst.push_back(cur);
		
		cnt ++;
		return;
	}
	//cout <<  s << " exploring "<< cur << endl;
	rec(s+1,cur);
	for (int i=s;i<cur.length()-1;i++){
		// swap
		char temp = cur[s];
		cur[s] = cur[i+1];
		cur[i+1] = temp;
		//cout <<  s << " exploring "<< cur << endl;
		rec(s+1,cur);
		if (cnt == y) break;
		temp = cur[s];
		cur[s] = cur[i+1];
		cur[i+1] = temp;

	}
	
}

int main(){

	int n;
	cin >> n;
	for (int tc=1;tc<=n;tc++){
		scanf("%d %d" , &x , &y);
		string s = "";
		cnt = 0;
		for (int i=0;i<x;i++){
			s += (char) (i + 65);
		}
		printf("Case %d:\n" , tc);
		
		rec(0,s);
		sort(lst.begin(), lst.end());

		for (int i=0;i<lst.size();i++){
			cout << lst[i] << "\n";
		}
		lst.clear();
		
	}
	



	return 0;
}