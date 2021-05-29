#include<iostream>
#include<iomanip>

using namespace std;
typedef long long ll;
int main (){
	string s;
	while (cin >> s){
		int h,d,m,sc,c;
		h = (s[0]-'0')*10 + (s[1]-'0');
		m = (s[2]-'0')*10 + (s[3]-'0');
		sc = (s[4]-'0')*10 + (s[5]-'0');
		c = (s[6]-'0')*10 + (s[7]-'0');
		int dec = ((h*3600)+(m*60)+sc)*100+c;
		dec = dec * 125 / 108;
		printf("%07d\n", dec);

	}




	return 0;
}
