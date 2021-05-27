#include<iostream>
using namespace std;
typedef long long ll;
int main(int argc, char const *argv[])
{
	ll tc,n;
	int t = 1;
	cin >> tc;
	while (tc--){
		cin >> n;
		int cnt = 0;
		cout << "Case #" << t++ << ": " << n;
		for (int i=2;i*i<=n;i++){
			if (n%i == 0 && n/i != i){
				cout << " = " << n/i << " * " << i;
				cnt ++;
			}
			if (cnt == 2) break;
		}
		cout << endl;
	}

	return 0;
}
