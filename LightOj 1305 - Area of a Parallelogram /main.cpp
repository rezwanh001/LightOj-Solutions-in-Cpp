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
    int x1,y1, x2,y2, x3,y3, x4,y4;
    scanf("%d%d %d%d %d%d", &x1,&y1, &x2,&y2, &x3,&y3);
    x4 = x1 + (x3 - x2);
    y4 = y1 + (y3 - y2);

    int area1 = (x1*y2) + (x2*y3) + (x3*y4) + (x4*y1);
    int area2 = (x1*y4) + (x4*y3) + (x3*y2) + (x2*y1);

    printf("Case %d: %d %d %d\n",cas,x4,y4, abs(area1 - area2)/2);

	}
	return 0;
}
