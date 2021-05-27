#include<iostream>
#include<vector>
using namespace std;
int main (){
     int n;
     int tc = 1;
     while (cin >> n)
     {
          if (n == 0) break;
          vector<int> code(n);
          for (int i=0;i<n;i++)
          {
               cin >> code[i];
          }
          cout << "Game " << tc++ <<":\n";
          while(1)
          {
               vector<int> guess(n);
               for (int i=0;i<n;i++)
               {
                    cin >> guess[i];
               }
               if (guess[0] == 0 ) break;
               int a = 0, b = 0;
               for (int i=0;i<n;i++)
               {
                    if (guess[i] == code[i])
                    {
                         a++;
                         code[i] += 10;
                         guess[i] = 0;
                    }
               }
               // for (int i=0;i<n;i++){
               //      cout << guess[i] << " ";
               // }
               // cout << endl;
               for (int i=0;i<n;i++)
               {
                    for (int j=0;j<n;j++)
                    {
                         if (guess[j] == code[i])
                         {
                              b++;
                              guess[j] = 0;
                              break;
                         }
                    }
               }
               cout << "    (" << a << ","<< b << ")\n";
               for (int i=0;i<n;i++){
                    if (code[i] >= 10) code[i] -= 10;
               }
          }
     }



     return 0;
}
