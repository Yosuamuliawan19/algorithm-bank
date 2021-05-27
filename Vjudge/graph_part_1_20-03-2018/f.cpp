#include<iostream>
#include<vector>
#include<queue>

using namespace std;

vector <vector <  int  > >  adjList;
vector <int> dist;
queue<int> q;

int maxcnt = 0;
int iter = 0;
int cur = 0;

void bfs(int x){
     dist = vector<int>();
     dist.clear();
     for(int i=0;i<adjList.size();i++){
          dist.push_back(-1);
     }
     q.push(x);
     dist[x] = 0;
     while (!q.empty()){
          cur = q.front(); q.pop();
          cout << cur << endl;
          cout <<  "size"<<adjList[cur].size() << endl;
          for (int i=0;i<adjList[cur].size();i++){
               cout << dist[adjList[cur][i]]  << " " << adjList[cur][i] << endl;
               if (dist[adjList[cur][i]] == -1){
                    q.push(adjList[cur][i]);
                    dist[adjList[cur][i]] = dist[cur] + 1;
                    cout << "no " << dist[cur] << endl;
               }

          }

     }
     cout << "dist "<< dist[cur] << endl;
}

int main(){
     int n ;
     cin >> n ;
     int a , b ;
     for (int i=0;i<n;i++){
          adjList.push_back(vector< int >());

     }
     for (int i=0;i<n-1;i++){
          cin >> a >> b;
          adjList[a-1].push_back(b-1);
          adjList[b-1].push_back(a-1);

     }
     //cout << "Asdas" << endl;
     bfs(0);
     maxcnt = dist[cur];
     for (int i=0;i<dist.size();i++){
          cout << "ahdasda " << dist[i] << endl;
     }
     cout << "-----------------\n";
     bfs(cur);
     dist = vector<int>();
     q = queue<int>();
     maxcnt += dist[cur];
     cout << maxcnt<<endl;


}
