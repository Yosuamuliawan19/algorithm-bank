#include<stdio.h>

int main (){
	while (1){
		int arr[1000] = {0};
		int arr2[1000] = {0};
		int n;scanf("%d", &n);
		if (n == 0) break;
		
		for (int i=0;i<n;i++){
			scanf("%d" , &arr[i]);
		}
		int l = 0;
		for (int i=0;i<n-1;i++){
			if (arr[i] >arr[i+1] ){
				arr2[l] = arr[i];
				l++;
				arr[i] = arr[i+1];
			}
		}
		bool flag = true;

		for (int i=0;i<l;i++){
			if (arr2[i] < arr2[i]){
				flag = false;
			}
		}
		if (arr2[l-1] <= arr[n-1]){
			//printf("%d %d\n", arr2[l-1] , arr[n-1]);
			flag = false;
		}
		if (flag) printf("yes\n");
		else printf("no\n");

		
	}




	return 0;
}