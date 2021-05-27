// What algorithms i have learned so far


// 1. Math

// 2. Binary Search

// 3. Recursive and Divide and Conquer

// 4. Greedy + DP

// 5. Data Structure

// 6. Minimum Spanning Tree

// 7. Graph & Shortest Path

     // BFS
     queue<pair<int,int> > q;
     q.push(make_pair(sx,sy);
     maze[sx][sy] = 0;
     void bfs(int sx, int sy){
          pair<int,int> cur = q.front(); q.pop();
          int x = cur.first, y = cur.second;
          for (int i=0;i<4;i++){
               int a = x + dx[i], b = y + dy[i];
               if (a >=0 && a < n && b >= 0 && b < m){
                    q.push(make_pair(a,b));
                    maze[a][b] = maze[x][y] + 1;
               }
          }
     }
