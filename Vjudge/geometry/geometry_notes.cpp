#include<iostream>
#include<vector>
#include<queue>
#include<string>
#include<map>
#include<climits>
#include<limits>
#include<cmath>
#include<iomanip>

typedef long double ld;
typedef long long ll;
const ld pi = acos(-1);

using namespace std;
struct point{
	ld x;
	ld y;
};
// check if three points lie on one line
bool isOneLine(point a, point b, point c){
     if ((b.y-a.y) * (c.x-b.x) == (b.x-a.x)(c.y-b.y)){
          return true;
     }else{
          return false;
     }
}
// distance between two points
ld dist(point a, point b){
	ld x = a.x-b.x;
	ld y = a.y-b.y;
	return sqrt(x*x + y*y);
}
// dot product
ld dot(point a, point b){
	return (a.x*b.x + a.y*b.y);
}
// length of a vector
ld length(point a){
	return sqrt(a.x*a.x + a.y*a.y);
}
// using dot product and vector projection
ld distPointToSegment(point x, point y, point m){
	point vec_a, vec_b;
	vec_a.x = m.x - x.x;
	vec_a.y = m.y - x.y;

	vec_b.x = y.x - x.x;
	vec_b.y = y.y - x.y;

	ld len_a = length(vec_a);
	ld len_b = length(vec_b);

	// get intersection using projection of a1
	ld a1 = (dot(vec_a,vec_b) / (len_b*len_b));
	point inter;
	inter.x = x.x + a1 * vec_b.x;
	inter.y = x.y + a1 * vec_b.y;

	// check if projection is outside the line
	ld xm = dist(x,m), ym = dist(y,m);
	if (dist(x,inter) + dist(inter,y) > dist(x,y) || len_b*len_b == 0){
		if (xm > ym){
			return ym;
		}else{
			return xm;
		}
	}
	return dist(inter, m);
}
// ternary for closest distance to
ld ternary(point x, point y, point m){
     // uses two mid
	point l = x, r = y;
	for (int i=0;i<1;i++){
		point m1;
		m1.x = l.x + (r.x-l.x) /3.0;
		m1.y = l.x + (r.x-l.x) /3.0;
		point m2;
		m2.x = r.x - (r.x-l.x) /3.0;
		m2.y = r.x - (r.x-l.x) /3.0;

		ld d1 = dist(m1,m);
		ld d2 = dist(m2,m);
		if (d1 < d2){
			l = m1;
		}else{
			r = m2;
		}
	}
	return dist(l,m);
}
// get next to top of stack
point nextToTop(stack<point> s){
	point top = s.top(); s.pop();
	point ret = s.top(); s.push(top);
	return ret;
}
point p0;
// cmp to find the lowest polar angle and nearest
bool cmp(const point& a, const point& b){
	if (cross(p0,a,b) != 0){
		return (cross(p0,a,b) > 0 ? 1 : 0);
	}else{
		return (dist(p0,a) < dist(p0,b) ? 1 : 0);
	}
}
// convex hull using graham scan
vector<point> res;
void graham(vector<point> points, ll n){
	// find bottom left
	ll miny = points[0].y, min = 0;
	for (ll i=0;i<n;i++){
		if (points[i].y < miny){
			miny = points[i].y;
			min = i;
		}else if (points[i].y == miny){
			if (points[i].x < points[min].x){
				min = i;
			}
		}
	}
	//swap min and 0
	point tmp = points[min];
	points[min] = points[0];
	points[0] = tmp;
	// sort according to polar angle and distance
	p0 = points[0];
	sort(points.begin(), points.end(), cmp);
	// remove collinear except farthest
	ll m = 1;
	for (ll i=1;i<n;i++){
		while (i < n-1 && cross(p0, points[i], points[i+1]) == 0) i++;
		points[m] = points[i];
		m ++;
	}
	if (m < 3) return;
	// start elimination according if it is strictly clockwise
	stack<point> s;
	s.push(points[0]);
	s.push(points[1]);
	s.push(points[2]);
	for (ll i=3;i<m;i++){
		while (cross(nextToTop(s), s.top(), points[i]) < 0) s.pop();
		s.push(points[i]);
	}
	// convert stack into vector
	while (!s.empty()){
		res.push_back(s.top());
		s.pop();
	}
}
void jarvis (vector<point> points, ll n){
	if (n < 3 ) return;
	vector<point> hull;
	// find the leftmost point
	l = 0;
	for (ll i=1;i<n;i++){
		if (points[i].x < points[l].x){
			l = i;
		}
	}
	// start from the leftmost point and keep finding the most not ccw point
	ll p = l, q;
	do {
		hull.push_back(p);
		q = (p+1)%n;
		for (ll i=0;i<n;i++){
			if (cross(points[p], points[q], points[i]) > 0){
				q = i;
			}
			p = q;
		}
		
	}while(p != l);
}
int main (){



     return 0;
}
