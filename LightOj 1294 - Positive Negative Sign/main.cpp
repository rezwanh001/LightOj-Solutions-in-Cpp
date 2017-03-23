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
    ll n, m; ll sm = 0;
    scanf("%lld%lld",&n,&m);

    sm = m*(n/2);

    printf("Case %d: %lld\n",cas, sm);
	}
	return 0;
}
