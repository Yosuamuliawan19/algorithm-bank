#include<iostream>
// #include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include<map>
#include<climits>
#include<set>
#include<queue>
#include<string>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define FOR(i,a,b) for(int i=a;i<=b;i++)

void sieve(){
     for (int i=0;i<sz;i++) isPrime[i] = 1;
     isPrime[0] = isPrime[1] = 0;
     for (int i=2;i<sz;i++){
          if (isPrime[i]){
               for (int j=i*2;j<sz;j+=i){
                    isPrime[j] = 0;
               }
          }
     }
}
int main(int argc, char const *argv[])
{
	i

	return 0;
}
