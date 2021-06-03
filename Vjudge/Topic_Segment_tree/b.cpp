#include<iostream>
#include<vector>

typedef long long ll;
using namespace std;
struct elem{
     int x=0,y=0,z=0;
}st[(int)(2*10e6)];
string s;
int n, q, l, r;

elem combine(elem b, elem c){
     elem a;
     int tmp = min(b.x, c.y);
     a.x = b.x + c.x - tmp;
     a.y = b.y + c.y - tmp;
     a.z = b.z + c.z + tmp;
     return a;
}
void build(){
     for (int i=n-1;i>0;i--){
          elem b = st[(i*2)], c = st[(i*2)+1];
          st[i] = combine(b, c);
          // cout << i << " " << i*2 << " " << (i*2) +1 << endl;
          // cout << st[i].z << endl;
     }
}
elem query(int l, int r){
     elem suml, sumr;
     suml.z = 0; sumr.z = 0;
     // cout << "l = "  << l << " r = " << r <<endl;
     for (l+=n, r+=n; l < r; l>>=1, r>>=1){
          if (l&1){
               // cout << "l = " << l << " val = " << st[l].z << endl;
               suml = combine(suml, st[l++]);
          }
          if (r&1){
               // cout << "r = " << r-1 << " val = " << st[r-1].z << endl;
               sumr = combine(st[--r], sumr);
          }
     }
     // cout << "sums = " << suml.z << " " << sumr.z << endl;
     elem sum = combine(suml, sumr);
     // cout << "ans = " << sum.z << endl;
     return sum;
}
int main (){
     cin >> s;
     n = s.length();
     for (int i=0;i<n;i++){
          if (s[i] == '('){
               st[i+n].x++;
          }else{
               st[i+n].y++;
          }
     }
     build();

     cin >> q;
     while (q--){
          cin >> l >> r;
          cout << 2 * query(l-1, r).z<< endl;
     


     return 0;
}
