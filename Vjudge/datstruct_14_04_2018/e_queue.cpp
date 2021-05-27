#include<stdio.h>
int arr[10001] = {0};
int main (){
	while (1){
		int n;scanf("%d", &n);
		if (n == 0) break;
		if (n == 1) {
			printf("yes\n");
			continue;
		
		}
		for (int i=0;i<n;i++){
			scanf("%d", &arr[i]);
		}
		int r = n;
		for (int i=0;i<n-1;i++){
			if (arr[i] > arr[i+1]){
				arr[r] = arr[i];
				r++;
				arr[i] = arr[i+1];
			}
		}
		
		bool flag = true;
		for (int i=n;i<r;i++){
			
			if (arr[i] < arr[i+1]){
				flag = false;
			}
		}
		// printf("Back : ");
		// for (int i=0;i<r;i++){
		// 	printf("%d ", arr[i] );
		// }
		// printf("\n");

		if(flag) printf("yes\n");
		else printf("no\n");
		
	}




	return 0;
}