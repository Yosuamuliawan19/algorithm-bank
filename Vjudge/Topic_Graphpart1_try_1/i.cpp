#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> combine(vector<int> left, vector<int> right){
     int ls = left.size();
     int tmp;
     if (left[ls-1] != 0 && right[0] != 0){
          tmp = left[ls-1] + right[0];
          
     }

}
void build(int node, int l, int r){
     if (l == r){
          st[node] = inp[l];
          return ;
     }
     int left = node*2, right = node*2 +1, mid = (l+r)/2;
     build(left,l,mid);
     build(right,mid+1,r);
     st[node] = combine(st[left], st[right]);
}
int main (){



     return 0;
}
