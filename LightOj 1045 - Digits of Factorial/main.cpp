#include <bits/stdc++.h>
using namespace std;

double dp[1000001];

int main(){
#ifndef ONLINE_JUDGE
freopen("in", "r", stdin);
#endif // ONLINE_JUDGE

	int T;
	for(int i = 1; i < 1e6 + 1; i++){
		dp[i] = log(i) + dp[i-1];
	}
//	for(int i = 1; i <= 10; i ++){
//		cout << dp[i] << " ";
//	}
//	cout << endl;

	scanf("%d",&T);
	for(int cas = 1; cas <= T; cas ++){
		int n, b;
		scanf("%d%d",&n,&b);
		printf("Case %d: %.0lf\n",cas, floor( dp[n]/log(b) ) + 1.0 );
	}
	return 0;
}
