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
    ll W;
    scanf("%lld",&W);
    if(W%2 == 1){
      printf("Case %d: Impossible\n",cas);
    }
    else{
			ll N, M  = 2;
      for(;;){
        N = W/M;
        if(N%2 == 1 && N*M == W){
          printf("Case %d: %lld %lld\n",cas, N, M);
          break;
        }
        else{
          M += 2;
        }
      }
    }
  }
	return 0;
}
