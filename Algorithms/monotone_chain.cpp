const ld pi = acos(-1);
struct point{
	ld x, y;
};
using namespace std;
ld dot(point a, point b){
	return (a.x*b.x + a.y*b.y);
}
ld length(point a){
	return ((a.x * a.x) + (a.y * a.y));
}
// Hint A,B,C are colinear if and only if the largest of the lenghts of AB,AC,BC is equal to the sum of the other two.
ld cross(point a, point b, point c){
     return ( (b.y-a.y) * (c.x-b.x) - (b.x-a.x) * (c.y-b.y) );
}
ld dist(point a, point b){
	ld x = a.x - b.x;
	ld y = a.y - b.y;
	return sqrt(x*x + y*y);
}
// check one line 3d
bool oneLine(point a, point b, point c){
     ll x1 = a.x, y1 = a.y, z1 = a.z;
     ll x2 = b.x, y2 = b.y, z2 = b.z;
     ll x3 = c.x, y3 = c.y, z3 = c.z;
     return
     (((y2-y1)*(z3-z1) - (y3-y1)*(z2-z1) == 0) &&
     ((x3-x1)*(z2-z1) - (x2-x1)*(z3-z1) == 0) &&
     ((x2-x1)*(y3-y1) - (x3-x1)*(y2-y1) == 0));
}
bool monotoneCmp(const point& a, const point& b){
	if (a.x != b.x){
		return a.x < b.x;
	}else{
		return a.y < b.y;
	}
}
vector<point> monotoneChain(vector<point> points){
	ll n = points.size();
	ll k = 0, t;
	vector<point> hull(n*2);
	if (n < 3) return points;

	sort(points.begin(), points.end(), monotoneCmp);

	for (ll i=0;i<n;i++){
		while (k >= 2 && cross(hull[k-2], hull[k-1], points[i]) < 0) k--;
		hull[k++] = points[i];
	}
	for (ll i=n-2,t=k+1;i>=0;i--){
		while (k >= t && cross(hull[k-2], hull[k-1], points[i]) < 0) k--;
		hull[k++] = points[i];
	}
	hull.resize(k-1);
	return hull;
}
