#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
long long arr[10000010] = {0} ;
int main (){
	
	long long n , th; scanf("%lld%lld", &n , &th);
	
	long long max = -1;
	for (int i=0;i<n;i++){
		scanf("%lld", &arr[i]);
		if (arr[i] > max) max = arr[i];
	}
	sort (arr, arr + n);
	
	long long  top = max, bot = 0;
	long long ans = 0;
	while (bot <= top){
		long long mid = bot + (top - bot) /2;
		long long tot = 0;
		for (int i=n-1;i>=0;i--){
			if (arr[i] > mid)
			tot += arr[i] - mid;
		}
		if (tot >= th ){
			ans = mid;
			bot = mid +1 ;
		}else{
			top = mid - 1 ;
		}
		
	}
	 cout << ans << endl;
	

}