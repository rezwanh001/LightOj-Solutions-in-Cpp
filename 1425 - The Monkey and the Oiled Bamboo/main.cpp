#include <bits/stdc++.h>
using namespace std;

int arr[100005];
int r[100005];

int main()
{
  int T;
  scanf("%d", &T);
  for(int cas = 1; cas <= T; cas ++){
		int n;
		scanf("%d", &n);
		r[0] = 0;
		for(int i = 1; i <= n; i++){
			scanf("%d", &r[i]);
		}

		for(int i = 0; i < n; i++){
			arr[i] = r[i+1] - r[i];
		}

		int ans = -1;
		for(int  i = n-1; i >= 0; i--){
			if(ans == arr[i]){
				ans ++;
			}
			ans = max(ans, arr[i]);
		}
		printf("Case %d: %d\n", cas, ans);
  }
	return 0;
}
/**
2
5
1 6 7 11 13
4
3 9 10 14
*/
