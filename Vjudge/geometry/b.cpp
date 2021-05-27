#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<math.h>

typedef long long ll;
typedef long double ld;
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
ld cross(point a, point b, point c){
    return ( (b.y-a.y) * (c.x-b.x) - (b.x-a.x) * (c.y-b.y) );
}
ld dist(point a, point b){
	ld x = a.x - b.x;
	ld y = a.y - b.y;
	return sqrt(x*x + y*y);
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
int main (){
	ll n , dis;
	cin >> n >> dis;
	vector<point> p(n);
	for (ll i=0;i<n;i++){
		cin >> p[i].x >> p[i].y;
	}
	vector<point> res =	monotoneChain(p);
	
	ld ans = 0;
	ll m = res.size();
	for (ll i=0;i<m;i++){
		ans += dist(res[i], res[(i+1)%m]);
	}

	ans += (2.0*pi*dis);
	cout << (ll) (ans+0.5) << endl;
	return 0;
}

