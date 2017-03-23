#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

double dist(double x1, double y1, double x2, double y2) {
	x1 -= x2; y1 -= y2;
	return sqrt(x1 * x1 + y1 * y1);
}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("in", "r", stdin);
	#endif
	double ox, oy, ax, ay, bx, by;
	int cases, caseNo = 0;
	for (scanf("%d", &cases); cases--; ) {
		scanf("%lf %lf", &ox, &oy);
		scanf("%lf %lf", &ax, &ay);
		scanf("%lf %lf", &bx, &by);
		double a, b, c;
		a = dist(ax, ay, bx, by);
		b = dist(ox, oy, ax, ay);
		c = dist(ox, oy, bx, by);
		double alpha = acos((a * a - b * b - c * c) / (-2.0 * b * c));
		printf("Case %d: %.12lf\n", ++caseNo, alpha * b);
	}
	return 0;
}
