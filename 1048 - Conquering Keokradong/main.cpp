#include <bits/stdc++.h>

using namespace std;

int dp[1234];

int main() {
	int T;
	scanf("%d",&T);
	for(int cas = 1; cas <= T; cas++){
		int n ,k;
		scanf("%d%d",&n,&k);
		n ++;
		k ++;

		int hi = 0, lo = 0;
		for(int i = 0; i < n ;i++){
			scanf("%d",&dp[i]);
			hi += dp[i];
		}
		int i , j;
		int ts = 0;
		while(lo <= hi){
			int mid = (hi + lo)/2;
			//cout<<" mid : " << mid << endl;
			for(i = 1, j = 0; i <= k;i++){
				int sum = 0;
				for(; j < n; j++){
					if(sum + dp[j] > mid){
						break;
					}
					sum += dp[j];
					//cout<< j << " loop " << sum << endl;
				}
				//cout  << " " <<j << " " << sum << endl;
			}
			if(j < n){
				lo = mid + 1;
			}
			else{
				hi = mid - 1;
			}
			//cout << "l-h " << lo << " " << hi << endl;
		}
		//cout<< i << " " << j << " " << k << endl;

		printf("Case %d: %d\n",cas, lo);
		for(i = k, j = 0; i > 0; i--){
			int sum = 0;
			for(; n - j >= i; j++){
				if(sum + dp[j] > lo){
					break;
				}
				sum += dp[j];
			}
			printf("%d\n", sum);
		}
	}

	return 0;
}

/**
1
4 3
7
2
6
4
5
*/
