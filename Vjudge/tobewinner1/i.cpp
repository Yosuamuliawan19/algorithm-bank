#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
void build (int node, int l, int r){
     if (l == r){
          st[node] = inp[l];
          return;
     }
     int left = node*2, right = node*2+1, mid = l+(r-l)/2;
     build(left, l, mid);
     build(right, mid+1, r);
     st[node] = combine(st[left], st[right]);r
}
int query (int node, int l, int r, int i, int j){
     if (l)
}
int main (){


     return 0;
}
