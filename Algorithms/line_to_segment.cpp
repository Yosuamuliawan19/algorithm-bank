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
