#include<iostream>
#include<queue>

using namespace std;
int main(){
     priority_queue<pair<int,pair<int,int> > > pq;
     pair<int,pair<int,int> > q = make_pair(1, make_pair(1,1));
     pq.push(q);
     return 0;
}
