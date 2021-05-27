#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
char tmp;
ll n, m;
int arr[1010][1010] = {0};
int dirx[4]= {1,-1,0,0};
int diry[4]= {0,0,1,-1};



int isle = 0;



void ff(int x, int y){
     arr[x][y] = isle;
     for (int i=0;i<4;i++){
          int curx = x + dirx[i];
          int cury = y + diry[i];
          if (curx >= 0 && curx < n && cury >= 0 && cury <m && arr[curx][cury] == -2){
               ff(curx, cury);
          }
     }
}
void solve(){
     for (int i=0;i<n;i++){
          for (int j=0;j<m;j++){
               if (arr[i][j] == -2){
                    ff(i,j);
                    isle++;
               }
          }
     }
     for (int i=0;i<n;i++){
          set<int> st;
          for (int j=0;j<m;j++){
               if (arr[i][j] != -1){
                    st.insert(arr[i][j]);
               }
          }
          cout << st.size() << endl;
     }
     for (int j=0;j<m;j++){
          set<int> st;
          for (int i=0;i<n;i++){
               if (arr[i][j] != -1){
                    st.insert(arr[i][j]);
               }
          }
          cout << st.size() << endl;
     }
}
int main (){
     cin.tie(NULL);
     ios_base::sync_with_stdio(false);
     cin >> n >> m;
     for (int i=0;i<n;i++){
          for (int j=0;j<m;j++){
               cin >> tmp;
               if (tmp == '.') arr[i][j] = -1;
               else arr[i][j] = -2;
          }
     }


     solve();
     for (int i=0;i<n;i++){
          for (int j=0;j<m;j++){
               cout << arr[i][j] << " ";
          }
          cout << endl;
     }



}
