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
		ll A, B, cnt = 0 , res1, res2;
		scanf("%lld %lld", &A, &B);

    if(A > B){
      swap(A,B);
    }

    if(A%3 == 0){
			res1 = (A/3)*2;
    }
    else{
			res1 = (A/3)*2 + 1;
    }

    B += 1;
    if(B%3 == 0){
			res2 = (B/3)*2;
    }
    else{
			res2 = (B/3)*2 + 1;
    }

    printf("Case %d: %lld\n",cas, res2 - res1);
	}
	return 0;
}
