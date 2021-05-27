#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	int tc;
	cin >> tc;
	for (int i = 0; i < tc; ++i)
	{
		
		string a;
		cin >> a;
		string arr[200002];
		int count =0;
		for (int i1=0;i1<a.length() -1;i1++){
			string tmp = a.substr(i1,2);
			//cout << tmp << endl;

			bool ins = true;
			for (int i2 = 0; i2 < count; ++i2)
			{
				//cout << "comp " << tmp << " "<< arr[i2];
				if (tmp == arr[i2]){
					ins = false;
					//cout << " same" ;
					break;
				}
			}
			if (ins){
				arr[count] = tmp;
				//cout << tmp << "  unique"<<endl;
				count ++;
			}else{
				//cout << "not insert" << endl;
			}
		}
		cout <<count << endl;
	}
}