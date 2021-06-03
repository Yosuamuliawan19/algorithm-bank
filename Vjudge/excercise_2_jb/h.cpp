#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<math.h>
using namespace std;
int main(int argc, char const *argv[])
{
	long long ans, n;
	cin >> n;
	
	if(n%2==0){
        ans=n/2;
    }
    if(n%2==1){
        ans=(n-1)/2-n;
    }
	cout << ans << endl;
	return 0;
}