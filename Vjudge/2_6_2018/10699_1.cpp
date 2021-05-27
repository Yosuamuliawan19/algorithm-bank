#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include <bits/stdc++.h>

#define LL  long long
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;

bool isPrime[1000000] ;
void sieve(){
	for (int i=0;i<1000000;i++){
		isPrime[i] = true;
	}
	for (int i=2;i<1000000;i++){
		if (isPrime[i]){
			for (int j=i*2;j<1000000;j+=i){
				isPrime[j] = false;
				
			}
		}
	}

}


int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	sieve();
	int tc;
	while (cin >> tc ){
		if (tc == 0) break;
		int cnt = 0;
		for (int i=2;i<=(int)sqrt(tc) ; i++){
			//cout << "asdasd" << endl;
			if (tc % i == 0){
				if (isPrime[i]){
					cnt++;
					//cout << i << endl;
				} 
				if (isPrime[tc / i]){
					 cnt ++;
					 //cout << tc / i << endl;
				}
			}
		}
		cout << tc << " : "<< cnt << endl;
	}
	return 0;
}
