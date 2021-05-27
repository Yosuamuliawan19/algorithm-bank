#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main (){
	int n;
	cin >> n;
	
	int count = 0;
	vector<int> gis;
	int prev = -1;
	while (n --){
		int x;
		cin >> x;
		if (x > prev){
			count ++ ;
			prev = x;
			gis.push_back(x);
		}
	}
	cout << count << endl;	
	for (int i=0;i<gis.size();i++){
		cout << gis[i];
		if (i != gis.size() -1){
			cout << " " ;
		}
	}
	return 0;
}
