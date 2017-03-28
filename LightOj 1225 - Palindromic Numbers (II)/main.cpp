#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

bool palin(ll x){
	ll ans, tmp;
	tmp = x;
	ans = 0;

	while(x){
    ans = ans*10 + x%10;
    //cout << ans << endl;
    x/=10;
	}
	return ans == tmp;
}
int main(){
#ifndef ONLINE_JUDGE
freopen("in", "r", stdin);
#endif // ONLINE_JUDGE

	int T;
	scanf("%d", &T);
	string a, b;
	ll x;
	for(int cas = 1; cas <= T; cas++){
		scanf("%lld", &x);
		palin(x)? printf("Case %d: Yes\n", cas) : printf("Case %d: No\n", cas);
	}
	return 0;
}

