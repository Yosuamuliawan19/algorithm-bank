#include<iostream>
#include<map>
#include<vector>

using namespace std;
int main (){
     long long n , k , m;
     cin >> n >> k >> m;

     string temp;int temp2;
     vector<string> word;
     vector<long long> value;
     for (int i=0;i<n;i++){
          cin >> temp;
          word.push_back(temp);
     }
     for (int i=0;i<n;i++){
          cin >> temp2;
          value.push_back(temp2);
     }
     vector<long long> groupmin;
     map<string,long long> whichgroup;
     long long temp3, temp4;
     for (int i=1;i<=k;i++){
          long long min = 10000000001;
          cin >> temp3;
          for (int j=0;j<temp3;j++){
               cin >> temp4;
               whichgroup[word[temp4-1]] = i;
               if (value[temp4-1] < min){
                    min = value[temp4-1];
               }
          }
          // cout << "smt " << min << endl;
          groupmin.push_back(min);
     }
     long long result = 0;
     string temp5;
     // cout << "groupmin " <<endl;
     // for (int i=0;i<k;i++){
     //      cout << groupmin[i] << endl;
     // }
     // cout << "groupmin " <<endl;

     for (int i=0;i<m;i++){
          cin >> temp5;
          // cout << "group " << whichgroup[temp5] << endl;
          result+= groupmin[whichgroup[temp5]-1];
     }
     cout << result << endl;
}
