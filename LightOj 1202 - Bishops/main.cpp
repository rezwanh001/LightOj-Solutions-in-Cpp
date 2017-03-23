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
    int r1,c1,r2,c2;
    scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
    int x = abs(r1 - r2);
    int y = abs(c1 - c2);

    if(x == y){
      printf("Case %d: 1\n",cas);
    }
    else{
      if(x%2 == y%2){
				printf("Case %d: 2\n",cas);
      }
      else{
				printf("Case %d: impossible\n",cas);
      }
    }
  }
	return 0;
}
