#include<iostream>
#include<vector>
#define  FOR(a,b) for(int i =a; i<b;i++)
using namespace std;
int main (){
     /*
          There are 3 main types of graph representations

          1. Adjacency Matrix

            0 1 2 3
          0 - - - 1
          1 - - 4 -
          2 - 4 - 3
          3 1 - 3 -

          Good for -> Small dense graph where weights are frequently acessed.

          2. Adjacency List

          0: 1 2
          1: 0 3
          2: 0
          3: 1

          Good for -> Basically everything.

          3. Edge List

          0: 1 2
          0: 1 3
          0: 2 5
          0: 2 3

          Good for -> Kruskal MST where weights are sorted

     */


     //Adjacency matrix
     int adjMatrix[3][3] = {  {0 , 1 , 0},
                              {1 , 0 , 2},
                              {0 , 2 , 0}    }  ;


     //Adjacency list;
     vector< vector < pair <int,int> > > adjList;
     adjList.push_back(vector < pair <int,int> >() ); // push a new vector for each vertext
     // defining the list of neighbors for each vertex in the format of (vertex, weight)
     adjList[0].push_back(make_pair(1, 2));
     adjList[0].push_back(make_pair(2, 5));

     adjList.push_back( vector< pair<int,int> >());
     adjList[1].push_back(make_pair(0, 2));

     adjList.push_back( vector< pair<int,int> >());
     adjList[2].push_back(make_pair(0, 5));


     //Edge list;
     //Adding to the list in the format of (weight , pair (v1, v2))
     vector<pair <int, pair<int , int> >  > edgeList;
     edgeList.push_back(make_pair(2 ,make_pair(0, 1)));
     edgeList.push_back(make_pair(3 ,make_pair(2, 3)));
     edgeList.push_back(make_pair(5 ,make_pair(3, 8)));

     //Converting adjacency matrix to adjacency List
     cout << "ADJACENCY MATRIX TO ADJACENCY LIST"<<endl;
     vector < vector < pair < int , int > > > newAdjList;
     for (int i=0;i<3;i++){
          newAdjList.push_back(vector < pair<int , int> >());
          for (int j=0;j<3;j++){
               if (adjMatrix[i][j] != 0)
               newAdjList[i].push_back(make_pair(j ,adjMatrix[i][j]) );
          }

     }
     for (int i=0;i<newAdjList.size();i++){
          cout << "Current vertex  = " << i << endl;
          for (int j=0;j<newAdjList[i].size();j++){
               cout << "v = " << newAdjList[i][j].first << " w = " << newAdjList[i][j].second << "\n";
          }
     }
     //Converting adjacency matrix to edge List
     cout << "ADJACENCY MATRIX TO EDGE LIST"<<endl;
     vector < pair < int , pair < int , int > > > newEdgeList;
     int count = 1;
     for (int i=0;i<3;i++){
          for (int j=count;j<3;j++){
               if (adjMatrix[i][j] != 0){
                    newEdgeList.push_back(make_pair(adjMatrix[i][j],make_pair(i,j)));
               }
          }
          count ++;
     }
     for (int i=0;i<newEdgeList.size();i++){
          cout << "w = "<< newEdgeList[i].first
          << " v1 = "<<newEdgeList[i].second.first
          << " v2 = "<<newEdgeList[i].second.second << endl;
     }
     



}
