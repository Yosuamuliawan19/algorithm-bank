#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main (){
	long long n;
	cin >> n;
	cout << n << " ";
	while (n != 1){
		for (long long i=2;i<=n;i++){
			if (n % i == 0){
				n = n / i;
				if (n == 1) cout << 1 << "\n";
				else cout << n << " ";
				break;
			}
		}
	}
	
}
