#include <bits/stdc++.h>
using namespace std;

int arr[32];

int main(){
#ifndef ONLINE_JUDGE
freopen("in", "r", stdin);
#endif // ONLINE_JUDGE
  int T;
  scanf("%d",&T);
  for(int cas = 1; cas <= T; cas ++){
    int n, P, Q;
    scanf("%d%d%d",&n,&P, &Q);
    for(int i = 0; i < n; i++){
      scanf("%d",&arr[i]);
    }
    int cnt = 0;
    int sm  = 0;
    int i;
    for(i = 0; i < n; i++){
			sm += arr[i];
			cnt ++;
			if (i >= P  || sm > Q){
				break;
			}
    }
    printf("Case %d: %d\n", cas, i);
  }
  return 0;
}
