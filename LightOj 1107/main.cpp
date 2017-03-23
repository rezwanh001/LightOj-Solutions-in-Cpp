#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
#ifndef ONLINE_JUDGE
freopen("in", "r", stdin);
#endif // ONLINE_JUDGE

	int T, x1, y1,x2,y2 ;
	scanf("%d",&T);
	for(int cas = 1; cas <= T; cas ++){
		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
		printf("Case %d:\n",cas);
    int M, x, y;
    scanf("%d",&M);
    for(int m = 1; m <= M; m ++){
			scanf("%d%d", &x, &y);
			if( ( (x >= x1 && x <= x2) || (x >= x2 && x <= x1) ) && ( (y >= y1 && y <= y2) || (y >= y2 && y <= y1) ) ){
        printf("Yes\n");
			}
			else{
				printf("No\n");
			}
    }
	}
  return 0;
}
