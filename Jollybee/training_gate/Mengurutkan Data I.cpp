#include<stdio.h>
#include<algorithm>
using namespace std;


int main(int argc, char const *argv[])
{
     int n;
     int arr[10010];
     scanf("%d", &n);
     for (int i=0;i<n;i++) scanf("%d", &arr[i]);
     sort(arr,arr+n);
     for (int i=0;i<n;i++){
          if (i != 0) printf(" ");
          printf("%d", arr[i]);
     }


	return 0;
}
