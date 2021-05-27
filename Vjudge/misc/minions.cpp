#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<math.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int tc;
	cin >> tc ;

	char w[1001];
	for (int i = 0; i < tc; ++i)
	{
		int ans = 2;
		cin >> w;
		for (int i = 0; i < strlen(w)-1; ++i)
		{
			int x = 0;
			if (w[i] == w[i+1]){
				ans++;
				//cout << "letters " << w[i] << w[i+1] << "  " << 1 <<  endl;

				continue;
			}
			else if (w[i] < w[i+1]){
			 	x = abs(w[i+1] - w[i]);
			}
			else{ x = (26 - w[i]) + w[i+1]; } 
			//cout << "letters " << w[i] << w[i+1] << "  " << x <<  endl;
			ans+= x + 1;
		}

		if ((strlen(w)*11) >= ans){
			cout << "YES" << endl;
		}else{cout << "NO" << endl;
}
	}
	
	return 0;
}