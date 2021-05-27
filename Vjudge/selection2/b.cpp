#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
#include<climits>

typedef long long ll;
using namespace std;

double wkit, m;
string s;
double tmp;
vector<pair<double,string> > items;
double n, w;

ll mn;
vector<string> finalres;
void dp (vector<string> res, double left, int idx ){
     if (idx == m) return;
     if (left > 0){
          dp (res, left, idx+1);
          res.push_back(items[idx].second);
          dp (res, left - items[idx].first, idx+1);
     }else{
          if (left > mn){
               finalres = res;
               mn = left;
          }
     }

}
int main (){
     cin >> wkit >> m ;
     for (int i=0;i<m;i++){
          cin >> s >> tmp;
          items.push_back(make_pair(tmp,s));
     }
     sort(items.begin(),items.end());
     cin >> n;
     for (int i=0;i<n;i++){
          cin >> w;
          w /= 2;
          w -= wkit;
          mn = LLONG_MIN;
          dp (vector<string>(), w, 0);

          if (mn != LLONG_MIN){
               cout << finalres.size() << " ";
               for (int i=0;i<finalres.size();i++){
                    cout << finalres[i] << " ";
               }
               cout << endl;
          }else{
               cout << "-1\n";
          }

     }


}
