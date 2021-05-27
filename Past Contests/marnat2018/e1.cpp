#include<iostream>
// #include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include<map>
#include<sstream>
#include<climits>
#include<set>
#include<stack>
#include<queue>
#include<string>
#include <stdlib.h>
using namespace std;
// #include <bits/stdc++.h>
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define FOR(i,a,b) for(int i=a;i<=b;i++)
struct Point
{
    int x, y;
};
Point p0;
Point nextToTop(stack<Point> &S)
{
    Point p = S.top();
    S.pop();
    Point res = S.top();
    S.push(p);
    return res;
}
int swap(Point &p1, Point &p2)
{
    Point temp = p1;
    p1 = p2;
    p2 = temp;
}
int distSq(Point p1, Point p2)
{
    return (p1.x - p2.x)*(p1.x - p2.x) +
          (p1.y - p2.y)*(p1.y - p2.y);
}
int orientation(Point p, Point q, Point r)
{
    int val = (q.y - p.y) * (r.x - q.x) -
              (q.x - p.x) * (r.y - q.y);

    if (val == 0) return 0;  // colinear
    return (val > 0)? 1: 2; // clock or counterclock wise
}
vector<Point> conv;
int compare(const void *vp1, const void *vp2)
{
   Point *p1 = (Point *)vp1;
   Point *p2 = (Point *)vp2;
   int o = orientation(p0, *p1, *p2);
   if (o == 0)
     return (distSq(p0, *p2) >= distSq(p0, *p1))? -1 : 1;
   return (o == 2)? -1: 1;
}
void convexHull(Point points[], int n)
{
   int ymin = points[0].y, min = 0;
   for (int i = 1; i < n; i++)
   {
     int y = points[i].y;
     if ((y < ymin) || (ymin == y &&
         points[i].x < points[min].x))
        ymin = points[i].y, min = i;
   }
   swap(points[0], points[min]);
   p0 = points[0];
   qsort(&points[1], n-1, sizeof(Point), compare);
   int m = 1; // Initialize size of modified array

   for (int i=1; i<n; i++)
   {
       while (i < n-1 && orientation(p0, points[i],
                                    points[i+1]) == 0)
          i++;


       points[m] = points[i];
       m++;
   }
   if (m < 3) return;
   stack<Point> S;
   S.push(points[0]);
   S.push(points[1]);
   S.push(points[2]);
   for (int i = 3; i < m; i++)
   {
      while (orientation(nextToTop(S), S.top(), points[i]) != 2)
         S.pop();
      S.push(points[i]);
   }
   while (!S.empty())
   {
       Point p = S.top();
       // cout << "(" << p.x << ", " << p.y <<")" << endl;
       conv.pb(p);
       S.pop();
   }
}
 Point pts[1100];
 int tc, n,a,b;
 double dist(double x1, double y1, double x2, double y2){
      double a = (x1-x2), b = (y1-y2);
      return (a*a + b*b);
 }
double test(double x, double y){
     double ret = 0;
     for (int i=0;i<conv.size();i++){
          ret = max(ret, dist(x,y,conv[i].x,conv[i].y));
          // cout << ret<< endl;
     }
     // cout << endl;
     return ret;

}
int main()
{


    cin >> tc;
    while (tc--){
         cin >> n;
         double x = 0, y = 0;
         for (int i=0;i<n;i++){
              cin >> a >> b;
              Point cur;
              cur.x = a;
              cur.y = b;
             pts[i] = cur;
         }
          convexHull(pts, n);
          for (int i=0;i<n;i++){

          }ø
          double ans = INT_MAX,a,b;
          for (int i=0;i<conv.size();i++){
               for (int j=i+1;j<conv.size();j++){
                    double x = (conv[i].x + conv[j].x)/2;
                    double y = (conv[i].y + conv[j].y)/2;
                    // cout << x << " " << y << endl;
                    double cur = test(x,y);
                    if(cur < ans){
                         ans = cur;
                         a = x;
                         b = y;
                    }
               }
          }
          cout << fixed << setprecision(2)<< a << " " << b << " " << ans << endl;
    }

    return 0;
}
