#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
     long long n,q;
     string temp;
     long long year;
     map <string, vector <long long> > m;

     cin >> n;
     while (n--){
          cin >> temp >> year;
          m[temp].push_back(year);
     }
     for (map<string, vector <long long> >::iterator it = m.begin();
          it != m.end();it++){
          sort(it->second.begin(),it->second.end());
     }
     cin >> q;
     while (q--){
          cin >> temp >> year;
          cout << m[temp][year -1] << "\n";
     }


}
