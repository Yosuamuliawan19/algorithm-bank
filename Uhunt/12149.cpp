#include<iostream>
using namespace std;


int main()
{

	int n;
     int arr[200] = {0};
     arr[0] = 0;
     for (int i=1;i<200;i++){
          arr[i] = arr[i-1] + (i*i);
     }
     while (cin >> n){
          if (!n) break;
          cout << arr[n] << endl;
     }

	return 0;
}
