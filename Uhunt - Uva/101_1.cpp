#include<iostream>
#include<vector>
using namespace std;
int tc;
string s,s1;
int n,a,b;

vector<int>  arr[100];
pair<int,int> find(int val){
     int x,y;
     for (int i=0;i<n;i++){
          for (int j=0;j<arr[i].size();j++){
               if (arr[i][j] == val){
                    x=i;y=j;
                    i=n; break;
               }
          }
     }
     return make_pair(x,y) ;
}
void clear(int a, int b){
     for (int i=b+1;i<(int)arr[a].size();i++){
          int cur = arr[a][i];
          arr[cur].push_back(cur);
     }
     arr[a].resize(b+1);
}
void onto(int a, int b, int pile){
     for (int i=b;i<(int)arr[a].size();i++){
          arr[pile].push_back(arr[a][i]);
     }
     arr[a].resize(b);
}
int main(int argc, char const *argv[])
{

	cin >> n;
	for (int i=0;i<n;i++)arr[i].push_back(i);
	while (cin >> s >> a >> s1 >> b){
          pair<int,int> c = find(a);
          pair<int,int> d = find(b);
          if (c.first == d.first || a == b) continue;
		if (s == "move") clear(c.first,c.second);
          if (s1 == "onto") clear(d.first,d.second);
          onto(c.first,c.second, d.first);
	}
     for (int i=0;i<n;i++){
          cout << i << ":";
          for (int j=0;j<arr[i].size();j++){
               cout << " "<<  arr[i][j] ;
          }
          cout << endl;
     }








	return 0;
}
