#include<bits/stdc++.h>
using namespace std;
int myAtoi(string str) {
  long long ans = 0, iter = 0;
  bool isNegative = 0;

  while (str[iter] == 32){
     iter ++;
     if (iter >= str.length()){
          return 0;
     }
  }

  if (str[iter] == '-'){
     isNegative = 1; iter++;
  }else if (str[iter] == '+'){
     iter ++;
  }else if (str[iter] < 48 || str[iter] > 57 ){
     return 0;
  }

  while (str[iter] >= 48 && str[iter] <= 57){
      long long tmp = ans*10 + (str[iter] - 48);
       if  (isNegative && -1*tmp < INT_MIN){
           return INT_MIN;
      }else if (!isNegative && tmp > INT_MAX){
           return INT_MAX;
      }
     ans = tmp;


     iter++;
     if (iter >= str.length()) break;
  }
  if (!isNegative) return ans;
  else return -1 * ans;

}
int main(){
     string input;
     getline(cin, input);
     // cout << INT_MAX << endl;
     // cout << INT_MIN << endl;
     cout << myAtoi(input);





     return 0;
}
