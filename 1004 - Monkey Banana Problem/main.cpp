#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll arr[205][105];
ll dp[205][105];
ll n;

ll call(ll i, ll j){
	if( i>=0 && i<2*n-1 and j>=0 && j<n){
		if(dp[i][j] != -1){
			return dp[i][j];
		}
		ll one = 0, two = 0;
		if(j==0 && i>=n-1){
			one = arr[i][j] + call(i+1, j);
		}
		else if(i>=n-1 && arr[i+1][j] == 0){
			one = arr[i][j] + call(i+1, j-1);
		}
		else if(i<n-1){
			one = arr[i][j] + call(i+1, j);
			two = arr[i][j] + call(i+1, j+1);
		}
		else if(i>=n-1){
			one = arr[i][j] + call(i+1, j);
			two = arr[i][j] + call(i+1, j-1);
		}
		dp[i][j] = max(one, two);
		return dp[i][j];
	}
	else{
		return 0;
	}
}

int main(){
	ll T;
	scanf("%lld",&T);
	for(ll cas = 1; cas <= T; cas++){
		memset(dp, -1, sizeof dp);
		memset(arr, 0, sizeof arr);
		scanf("%lld",&n);
		for(ll i = 0; i < n; i++){
			for(ll j = 0; j <= i; j++){
				scanf("%lld",&arr[i][j]);
			}
		}
		for(ll i = 0; i < (n-1) ; i++){
			for(ll j = 0; j < n - 1 - i; j++){
				scanf("%lld",&arr[i+n][j]);
			}
		}
		printf("Case %lld: %lld\n",cas, call(0, 0));
	}
	return 0;
}
