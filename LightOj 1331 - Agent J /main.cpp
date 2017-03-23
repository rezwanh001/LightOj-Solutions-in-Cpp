#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
#ifndef ONLINE_JUDGE
freopen("in", "r", stdin);
#endif // ONLINE_JUDGE

	int T;
	scanf("%d",&T);
	for(int cas = 1; cas <= T; cas ++){
    double r1,r2,r3;
    scanf("%lf%lf%lf",&r1,&r2,&r3);
    double a, b, c;

    a = r2 + r3;
    b = r1 + r3;
    c = r1 + r2;

    double A = acos( ((b*b)+(c*c)-(a*a))/(2*b*c) );
    double B = acos( ((a*a)+(c*c)-(b*b))/(2*a*c) );
    double C = acos( ((b*b)+(a*a)-(c*c))/(2*b*a) );

    double s = (a+b+c)/2.0;
    double Area = sqrt( s*(s-a)*(s-b)*(s-c) );
    Area = Area - ( (r1*r1)*A + (r2*r2)*B + (r3*r3)*C )/2.0;

		printf("Case %d: %.6lf\n",cas, Area);


	}
	return 0;
}
