#include<iostream>
#include<iomanip>

using namespace std;
double st[300001];
double tmp[100001];
typedef int ll;
int n, q;

void build(int node, int l , int r){
     if (l == r) {
          st[node] = tmp[l];
          return;
     }
     int left = node*2, right = (node*2) +1, mid = (l+r)/2;
     build(left, l, mid);
     build(right, mid+1, r);
     st[node] = st[left] + st[right];
}
void modify(int node, int d, int u, int i, double val){
     if (i > u || i < d ) return ;
     if (d >= i &&   u <= i){
          st[node] = val;
          return ;
     }
     int left = node*2, right = (node*2) +1, mid = (u+d)/2;
     modify(left, d, mid, i, val);
     modify(right, mid+1, u, i, val  );
     st[node] = st[left] + st[right];
}
double query(int node, int d, int u, int i, int j){
     if (i > u || j < d ) return 0 ;
     if (d >= i &&   u <= j){
          return st[node];
     }
     int left = node*2, right = node*2 +1, mid = (u+d)/2;
     double v1 = query(left, d, mid, i, j);
     double v2 = query(right, mid+1, u, i, j);
     return v1+v2;
}
int main (){
     double a, b, c;
     scanf("%d",&n);
     for (int i=1;i<=n;i++){
          scanf("%lf",&tmp[i]);
     }
     build(1,1,n);
     scanf("%d",&q);
     for (int i=0;i<q;i++){
          scanf("%lf%lf%lf",&a,&b,&c);
          if (a == 1){
               modify(1,1,n,b,c);
          }else if (a == 2){
               printf("%0.6lf\n",query(1,1,n,b,c) /( c+1-b ) );
          }
     }
     return 0;
}
