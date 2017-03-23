#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pi acos(-1)

double getV(double r, double h) {
	return pi*r*r*h/3.0;
}

int main(){
#ifndef ONLINE_JUDGE
freopen("in", "r", stdin);
#endif // ONLINE_JUDGE

	int T;
	scanf("%d",&T);
	for(int cas = 1; cas <= T; cas ++){
		double r1, r2, h,p;
		scanf("%lf%lf%lf%lf",&r1, &r2, &h, &p);

		double H = ( r1*h )/( r1-r2 );
		double R = ( H-h+p )*r1/H;

		double VOL = getV(R, H-h+p);
		double vol = getV(r2, H-h);

		printf("Case %d: %0.6lf\n",cas, (VOL - vol));
 	}
	return 0;
}
