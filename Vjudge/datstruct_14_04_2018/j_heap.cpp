#include<iostream>
#include<map>
using namespace std;
int heap[100001] = {0};
int sz = 0;
void ins(int x){
     sz++;
     heap[sz-1] = x;
     int i = sz-1;
     while (heap[(i-1) / 2] > x){
          swap(heap[i-1/2], heap[i]);
          i = (i-1)/2;
     }

}
int find(int k){
     for (int i=0;i<sz;i++){
          if (heap[i] == k){
               return i;
          }
     }
     return -1;
}
void del(int k){

     long long i = find(k);
     // cout << " this index  " << i << endl;
     // cout <<"i = " <<i << endl;
     heap[i] = heap[sz-1];
     heap[sz-1] = 0;
     // cout << "bot : "<< heap[i] << endl;
     sz --;
     while (1){
          // cout << "l = "<<(2*i) +1 <<" r = "<< (2*i) +2 << endl;
          if (((2 * i)+1) >= sz) break;
          if (((2 * i)+2) >= sz) break;
          if (heap[(2*i) +1] < heap[i]){
               // cout << "swap " <<heap[(2*i)+1] << " and "<<  heap[i] <<endl;
               swap(heap[(2*i)+1] , heap[i]);
               i = (2 * i)+1;
          }else if (heap[(2*i) + 2] < heap[i]){
               // cout << "swap2 " <<heap[(2*i)+2] << " and "<<  heap[i] <<endl;

               swap(heap[(2*i)+2] , heap[i]);
               i = (2*i) +2;
          }else break;

     }

}
void swap (int *x , int *y){
     int temp = *x;
     *x = *y;
     *y = temp;
}
int main (){
     int n;
     cin >> n;
     while (n--){
          int q; cin >> q;
          if (q == 1){
               cin >> q;
               ins(q);
               // for (int i=0;i<sz;i++){
               //      cout << heap[i] << " ";
               // }
               // cout << "\n";
          }else if (q == 2){
               cin >> q;
               del(q);
               // for (int i=0;i<sz;i++){
               //      cout << heap[i] << " ";
               // }
               // cout << "\n";
          }else{
               cout << heap[0] << "\n";
          }
     }



}
