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
    ll n, tmp, parity = 0;
    scanf("%lld",&n);
    tmp = n;

    while(tmp != 0){
      if(tmp % 2 == 1){
				parity ++;
      }
      tmp /= 2;
    }
		if(parity %2 == 0){
			printf("Case %d: even\n",cas);
		}
		else{
			printf("Case %d: odd\n",cas);
		}
  }
	return 0;
}
