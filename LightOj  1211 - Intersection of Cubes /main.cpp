#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
#ifndef ONLINE_JUDGE
freopen("in", "r", stdin);
#endif // ONLINE_JUDGE

  int T;
  scanf("%d",&T);
  for(int cas = 1; cas <= T; cas += 1){
    int n;
    scanf("%d",&n);
    int xLow = 0, yLow = 0, zLow = 0;
    int xHigh = 1005, yHigh = 1005, zHigh = 1005;
		int x1, y1, z1, x2, y2, z2;
		for(int i = 0; i < n; i++){
      cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;

      xLow = max(xLow, x1);
      xHigh = min(xHigh, x2);

      yLow = max(yLow, y1);
      yHigh = min(yHigh, y2);

      zLow = max(zLow, z1);
      zHigh = min(zHigh, z2);
		}
		int vol = (xHigh - xLow)*(yHigh - yLow)*(zHigh - zLow);
		if(vol < 0){
			printf("Case %d: 0\n",cas);
			return 0;
		}
		printf("Case %d: %d\n",cas, vol);
  }
	return 0;
}
