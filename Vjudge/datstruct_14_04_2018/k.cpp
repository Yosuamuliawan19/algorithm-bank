#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main (){
     int n;
     while (cin >> n){
          bool f1 = true, f2 = true, f3 = true;
          stack <int> s;
          queue <int> q;
          priority_queue<int> pq;
          int pushcnt = 0;
          while (n--){
               int op; cin >> op;
               if (op == 1){
                    pushcnt ++;
                    cin >> op;
                    s.push(op);
                    q.push(op);
                    pq.push(op);
               }else{
                    if (pushcnt == 0){
                         f1 = f2 = f3 = false;
                         continue;
                    }
                    cin >> op;
                    if (op != s.top()) f1 = false;
                    if (op != q.front()) f2 = false;
                    if (op != pq.top()) f3 = false;
                    s.pop();q.pop();pq.pop();
                    pushcnt --;
                }
          }
          int cnt = 0;
          if (f1) cnt++;
          if (f2) cnt++;
          if (f3) cnt++;

          if (cnt == 0){
               cout << "impossible\n";
          }else if (cnt > 1){
               cout << "not sure\n";
          }else if (f1){
               cout << "stack\n";
          }else if (f2){
               cout << "queue\n";
          }else{
               cout << "priority queue\n";
          }

     }


}
