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
		double v1, v2, v3, a1, a2;
    scanf("%lf%lf%lf%lf%lf",&v1, &v2, &v3, &a1, &a2);

    double t1, t2, ds1, ds2 , ans;
    t1 = v1/a1;
    t2 = v2/a2;

    double time = max(t1, t2);
    ans = v3*time;

    ds1 = v1*t1 - 0.5*a1*(t1*t1);
    ds2 = v2*t2 - 0.5*a2*(t2*t2);

    printf("Case %d: %.6lf %.6lf\n", cas, ds1+ds2, ans);
	}

	return 0;
}
