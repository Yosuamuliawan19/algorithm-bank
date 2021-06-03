#include<iostream>
#include<cmath>
using namespace std;
int main (){
	long long  n; cin >> n ;
	if (log2(n) == (int) log2(n)){
		cout << "TAK" << endl;
	}else {
		cout << "NIE" << endl;
	}
	// for (int i=0;i<100;i++){
	// 	int c = i;
	// 	int iter = 0 ;
	// 	while (c > 1){
	// 		iter ++; if (iter == 10000) break;
	// 		if (c % 2  == 0){
	// 			c = c / 2;
	// 		}else{
	// 			c = (3 * c ) + 3;
	// 		}
	// 	}
	// 	if (iter > 10000){
	// 		cout << i << " many" << endl;
	// 	}else{
	// 		cout << i << " " << iter << endl;
	// 	}
	// }


}