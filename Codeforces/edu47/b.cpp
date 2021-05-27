#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<pair<int,int> > arr;

void swap(int i, int j){
     pair<int,int> tmp = arr[i];
     arr[i] = arr[j];
     arr[j] = tmp;
}
int main (){
     string s;
     cin >> s;
     int cnt = 1;
     int prev = s[0];
     for (int i=1;i<s.length();i++){
          if (s[i] != prev){
               arr.push_back(make_pair(prev - '0', cnt));
               cnt = 1;
          }else{
               cnt ++;
          }
          prev = s[i];
     }
     arr.push_back(make_pair(prev-'0',cnt));
     while (1){
          bool f = 0;
          for (int i=0;i<arr.size()-1;i++){
               if (arr[i].first == 1 && arr[i+1].first == 0){
                    swap(i,i+1); f =1;
               }else if (arr[i].first == 2 && arr[i+1].first == 1){
                    swap(i,i+1); f =1;
               }
          }
          if (!f) break;
     }

     for (int i=0;i<arr.size();i++){
          for (int j=0;j<arr[i].second;j++){
               cout << arr[i].first ;
          }
     }
     cout << "\n";
}
