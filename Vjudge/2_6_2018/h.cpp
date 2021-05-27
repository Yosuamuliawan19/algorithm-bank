#include<iostream>
#include<string>
using namespace std;
int main (){
	int n;	
	int arr[20] = {0};
	while (cin >> n){
		if (n == 0) break;	
		for (int i=0;i<n;i++){
			cin >> arr[i];
		}
		string s;
		cin.ignore();
		getline(cin, s);
		
		int len = s.length();
		cout << "\'";
 		for (int i=0;i<s.length();i+=n){
			for (int j=0;j<n;j++){
				int index = (arr[j] - 1)  + i;
				if (index < len){
					cout << s[index];
				}else {
					cout << " ";
				}
			
			}
		}
		cout << "\'";
		cout << endl;	
	}
	return 0;
}
