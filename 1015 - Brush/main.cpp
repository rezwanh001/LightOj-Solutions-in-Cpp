#include <bits/stdc++.h>

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("in","r",stdin);
	#endif // ONLINE_JUDGE
	int T;
	scanf("%d",&T);
	for(int cas = 1; cas <= T; cas ++){
		int n,x, sm = 0;
		scanf("%d",&n);

		for(int i = 0; i < n; i++){
      scanf("%d",&x);
      if(x < 0){
				continue;
      }
      else{
				sm += x;
			}
		}
		printf("Case %d: %d\n",cas, sm);

	}
	return 0;
}
