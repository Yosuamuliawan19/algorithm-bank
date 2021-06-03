#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
char tmp;
ll n, m;
int arr[1010][1010] = {0};
int arrx[1010][1010] = {0};
int arry[1010][1010] = {0};

int dirx[4]= {1,-1,0,0};
int diry[4]= {0,0,1,-1};

int isle = 0;
int ans = 0;
bool suc = true;
bool allwhite = false;
int nrow = 0;
int ncol = 0;


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
void ffx(int x, int y){
     arrx[x][y] = isle;
     for (int i=0;i<4;i++){
          int curx = x + dirx[i], cury = y;
          if (curx >= 0 && curx < n && arrx[curx][cury] == -2){
               ffx(curx, cury);
          }
     }
}
void ffy(int x, int y){
     arry[x][y] = isle;
     for (int i=0;i<4;i++){
          int cury = y + diry[i], curx = x;
          if (cury >= 0 && cury <m && arry[curx][cury] == -2){
               ffy(curx, cury);
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
     ans = isle;
     isle = 0;
     for (int i=0;i<n;i++){
          for (int j=0;j<m;j++){
               if (arrx[i][j] == -2){
                    ffx(i,j);
                    isle++;
               }
          }
     }
     isle = 0;
     for (int i=0;i<n;i++){
          for (int j=0;j<m;j++){
               if (arry[i][j] == -2){
                    ffy(i,j);
                    isle++;
               }
          }
     }
     // cnts
     for (int i=0;i<n;i++){
          set<int> st;
          for (int j=0;j<m;j++){
               if (arry[i][j] != -1){
                    st.insert(arry[i][j]);
               }
          }
          // cout << st.size() << endl;
          if (st.size() > 1) {
               suc = false;
          }else if (st.size() == 0){
               allwhite = true;
               nrow ++;
          }
     }
     // cout << endl;
     for (int j=0;j<m;j++){
          set<int> st;
          for (int i=0;i<n;i++){
               if (arrx[i][j] != -1){
                    st.insert(arrx[i][j]);
               }
          }
          // cout << st.size() << endl;
          if (st.size() > 1) {
               suc = false;
          }else if (st.size() == 0){
               allwhite = true;
               ncol++;
          }
     }
     // cout << endl;
     // for (int i=0;i<n;i++){
     //      for (int j=0;j<m;j++){
     //           cout << arr[i][j] << " ";
     //      }
     //      cout << endl;
     // }
     // cout << endl;
     // for (int i=0;i<n;i++){
     //      for (int j=0;j<m;j++){
     //           cout << arrx[i][j] << " ";
     //      }
     //      cout << endl;
     // }
     // cout << endl;
     // for (int i=0;i<n;i++){
     //      for (int j=0;j<m;j++){
     //           cout << arry[i][j] << " ";
     //      }
     //      cout << endl;
     // }
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

               arrx[i][j] = arr[i][j];
               arry[i][j] = arr[i][j];
          }
     }
     solve();
     if (allwhite){
          if (nrow  m> 0 && ncol > 0 && suc){
               cout << ans <<"\n";
          }else{
               cout << "-1\n";
          }
     }else{
          if (suc)
          cout << ans << "\n";
          else
          cout << "-1\n";
     }


}
