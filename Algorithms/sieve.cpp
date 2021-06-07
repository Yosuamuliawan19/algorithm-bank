#include <bits/stdc++.h>

#define LL  long long
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int s = 90000000;
bool isPrime[90000000];
int primeList[5000000] = {0};
int idx = 1;
void sieve(){
	isPrime[0] = isPrime[1] = false;
	isPrime[2] = true;
	for (LL i=3;i<s;i++){
		if (i % 2 == 0) isPrime[i] = false;
		else isPrime[i] = 1;
	
	}
	primeList[0] = 2; 
	for (LL i=3;i<s;i+=2){
		if (isPrime[i]){
			primeList[idx] = i;
			idx++; 
			for (LL j=i*i;j<s;j+=i){
				isPrime[j] = 0;
			}
		}
	}
	
}


int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	sieve();
	int tc;
	scanf("%d",&tc) ;
	while (tc--){
		int a;
		scanf("%d",&a) ;
		printf("%d\n", primeList[a-1] );
	} 
	return 0;
}