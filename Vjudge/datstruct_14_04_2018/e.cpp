#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll s[10000001];
int main (){
	ll n, temp;
	while (scanf("%lld", &n) == 1){
		if (n == 0) break;
		ll cnt = 1;
		
		ll idx = 0;
		for (ll i=0;i<n;i++){
			while (idx != 0 && s[idx-1] == cnt){
				idx --;
				cnt ++;
			}
			scanf("%lld", &temp);
			if (temp == cnt){
				cnt ++;
			}else{
				s[idx++] = temp;
			}
		}
		while (idx != 0){
			if (s[idx-1] == cnt){
				// cout << "popped " << s[idx-1] << endl;
				idx --;
				cnt ++;
			}else{
				break;
			}
		}
		if (cnt == n+1){
			printf("yes\n");
		}else{
			printf("no\n");
		}
	}
	
	
	
	return 0;
}
