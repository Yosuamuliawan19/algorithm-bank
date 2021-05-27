#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int curcol = 0;
int r, c;
vector<vector<int> > mp;
vector<vector<int> > color;
void ff(int x, int y){
     color[x][y] = curcol;
     for (int i=0;i<4;i++){
          int a = dx[i] +x, b = dy[i] +y;
          if (a >= 0 && a < r && b >= 0 && b < c && mp[a][b] == mp[x][y] &&
              color[a][b] == -1
          ){

               ff(a,b);
          }
     }
}
int main (){
     string tmp;
     cin >> r >> c;
     mp = vector<vector<int> >(r, vector<int>(c));
     color = vector<vector<int> >(r, vector<int>(c,-1));
     for (int i=0;i<r;i++){
          cin >> tmp;
          for (int j=0;j<c;j++){
               if (tmp[j] == '1'){
                    mp[i][j] = 1;
               }else{
                    mp[i][j] = 0;
               }
          }
     }

     for (int i=0;i<r;i++){
          for (int j=0;j<c;j++){
               if (color[i][j] == -1){
                    curcol ++;
                    // cout << i << " " << j << endl;
                    ff(i,j);
               }

          }
     }
     // for (int i=0;i<r;i++){
     //      for (int j=0;j<c;j++){
     //           cout << color[i][j];
     //      }
     //      cout << endl;
     // }
     int q;
     int a,b,c,d;
     cin >> q;
     while (q--){
          cin >> a >> b >> c >> d;
          a--;b--;c--;d--;
          if (mp[a][b] == mp[c][d] && color[a][b] == color[c][d]){
               if (mp[a][b] == 1){
                    cout << "decimal\n";
               }else{
                    cout << "binary\n";
               }
          }else{
               cout << "neither\n";
          }
     }




     return 0;
}
