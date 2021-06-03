#include<iostream>
#include<vector>

typedef long long ll;
using namespace std;
struct elem{
     int odd, even;
}st[(int)(2*10e6)];
int tc, n, q, tmp;
#define MAX 100

int comb(int m, int n)
{
    int mat[MAX][MAX];
    int i, j;
    if (n > m) return 0;
    if( (n == 0) || (m == n) ) return 1;
    for(j = 0; j < n; j ++)
    {
        mat[0][j] = 1;
        if (j == 0)
        {
            for (i = 1; i<= m - n; i ++ ) mat[i][j] = i + 1;
        }
        else
        {
            for (i = 1; i<= m - n; i ++) mat[i][j] = mat[i - 1][j] + mat[i][j - 1];
        }
    }
    return (mat[m - n][n - 1]);
}
elem combine(elem b, elem c){
     elem a;
     a.odd = b.odd + c.odd;
     a.even = b.even + c.even;
     return a;
}
void build(){
     for (int i=n-1;i>0;i--){
          elem b = st[(i*2)], c = st[(i*2)+1];
          st[i] = combine(b, c);
     }
}
elem query(int l, int r){
     elem suml, sumr;
     for (l+=n, r+=n; l < r; l>>=1, r>>=1){
          if (l&1){
               suml = combine(suml, st[l++]);
          }
          if (r&1){
               sumr = combine(st[--r], sumr);
          }
     }
     elem sum = combine(suml, sumr);
     return sum;
}
int main (){
     cin >> tc;
     while (tc--){
          cin >> n >> q;
          for (int i=0;i<n;i++){
               cin >> tmp;
               if (tmp % 2 == 0){
                    st[i+n].odd = 0;
                    st[i+n].even = 1;
               }else{
                    st[i+n].odd = 1;
                    st[i+n].even = 0;
               }
          }

     }
     build();
     int t, l, r;
     // for (int i=0;i<n*2;i++){
     //      cout << "(" << st[i].odd << "," << st[i].even << ") ";
     // }
     // cout << endl;
     while (q--){
          cin >> l >> r >> t;
          elem ans = query(l,r);
          if (t == 1){
               int fin = 0;
               for (int i=ans.odd;i>0;i--){
                    fin += comb(ans.odd, i);
               }
               cout << fin << endl;
          }else{

               // int fin = 0;
               // for (int i=ans.odd;i>0;i--){
               //      fin += comb(ans.odd, i);
               // }
               //
               // int fin2 = 0;
               // for (int i=ans.even;i>0;i--){
               //      fin2 += comb(ans.even, i);
               // }
               // cout << fin2 * fin << endl;
          }
     }


     return 0;
}
