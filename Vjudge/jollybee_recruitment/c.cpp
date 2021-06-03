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
 		int x;
 		cin >> x;
 		cout << "Kasus #" << i + 1 <<":" <<endl;
 		for (int i1 = 0; i1 < x; ++i1)
 		{
 			cout << "---------" << endl;
 			cout << "|% \\0/ %|" << endl;
 			cout << "|\"  |  \"|" << endl;
 			cout << "|% / \\ %|" << endl;
 			cout << "---------" << endl; 
 		}
 	}
 	return 0;
 }