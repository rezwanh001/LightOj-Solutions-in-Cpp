#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll A[200], C[200];
ll n, make;
ll dp[51][1003];
ll MOD =100000007;

ll call(ll i, ll amount){
	if(i >= n){
		if(amount == make){
			return 1;
		}
		else{
			return 0;
		}
	}

	if(dp[i][amount] != -1){
		return dp[i][amount];
	}

	ll ret = 0;
	for(ll take = 1; take <= C[i] ; take++){
		if(amount + A[i]*take <= make){
			ret += call(i+1, amount + A[i]*take) % MOD;
		}
		else{
			break;
		}
	}
	ret += call(i+1, amount);
	return dp[i][amount] = ret % MOD;
}
int main() {
	ll T, cas = 1;
	scanf("%lld",&T);
	while(T--){
		memset(dp, -1, sizeof dp);
		scanf("%lld%lld",&n,&make);
		for(ll i = 0; i < n; i++){
			scanf("%lld",&A[i]);
		}
		for(ll i = 0; i < n; i++){
			scanf("%lld",&C[i]);
		}
		printf("Case %lld: %lld\n",cas, call(0,0));
		cas ++;
	}
	return 0;
}
/**
2
3 5
1 2 5 3 2 1
4 20
1 2 3 4 8 4 2 1

Case 1: 3
Case 2: 9
**/
