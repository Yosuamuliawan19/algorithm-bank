#include<iostream>
// #include<stdio.h>

#include<vector>
#include<map>
#include<queue>
#include<algorithm>
#include<iomanip>
int xs,ys,xf,yf;

using namespace std;
int main (){
     int tc;scanf("%d", &tc);
     for (int t=1;t<=tc;t++){
          int n, m;
          scanf("%d %d",  &n, &m );
          int mat[201][201] = {0};
          string temp;
          for (int i=0;i<n;i++){
               cin >> temp;
               for (int j=0;j<m;j++){
                    if (temp[j] == '.'){
                         mat[i][j] = 300;
                    }else{
                         mat[i][j] = 400;
                    }
               }
          }
          // for (int i=0;i<n;i++){
          //      for (int j=0;j<m;j++){
          //           cout << mat[i][j] << " ";
          //      }
          //      cout << endl;
          // }
          // printf("asdasd\n");
          scanf("%d %d",  &xs, &ys );
          scanf("%d %d",  &xf, &yf );
          int dx[4] = {1,-1,0,0};
          int dy[4] = {0,0,1,-1};
          priority_queue<pair<int,pair<int,int> > > pq;

          if (mat[xs][ys] == 300){
               mat[xs][ys] = 0;
          }
          else{
               mat[xs][ys] = 1;
          }
          pair<int,pair<int,int> > q = make_pair(-mat[xs][ys], make_pair(xs,ys));
          pq.push(q);

          int cnt = 0;
          bool stop = false;
          while (!pq.empty()){
               pair<int , pair<int,int> > curbef =  pq.top(); pq.pop();
               pair<int,int> cur = curbef.second; int cost = -1 * curbef.first;
               int x = cur.first, y = cur.second;

               // cout << x <<" "<<y<<endl;
               for (int i=0;i<4;i++){
                    int a = x + dx[i], b = y + dy[i];
                    int min = mat[x][y], minx = x, miny = y;
                    for (int j=0;j<4;j++){
                         int k = a + dx[j],  l  = b + dy[j];
                         if (k >= 0 && k < n && l >=0 && l < m){
                              if (mat[k][l] != 300 && mat[k][l] != 400){
                                   if (min > mat[k][l]){
                                        min = mat[k][l];
                                        minx = k; miny = l;
                                   }
                              }
                         }
                    }
                    // if (a == 0 && b == 0)
                    // cout << "min cor " << minx << " "<<miny << endl;
                    if (a >= 0 && a < n && b >=0 && b < m){
                         if (mat[a][b] == 300){
                              mat[a][b] = min;
                              pq.push(make_pair(-min, make_pair(a,b)));
                         }else if(mat[a][b] == 400){
                              mat[a][b] =  min + 1;
                              pq.push(make_pair(-1*(min+1), make_pair(a,b)));
                         }

                    }

               }

               // cnt ++; if (cnt < 10){
               //      for (int i=0;i<n;i++){
               //           for (int j=0;j<m;j++){
               //                cout << mat[i][j] << " ";
               //           }
               //           cout << endl;
               //      }
               // }

          }
               printf("Case #%d: %d\n" , t,  mat[xf][yf] );

          // for (int i=0;i<n;i++){
          //      for (int j=0;j<m;j++){
          //           if (mat[i][j] == 300){
          //                cout << ". ";
          //           }else if (mat[i][j] == 400){
          //                cout << "# ";
          //           }else
          //           cout << mat[i][j] << " ";
          //      }
          //      cout << endl;
          // }
     }

}
