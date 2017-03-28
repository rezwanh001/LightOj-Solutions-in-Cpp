#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
#ifndef ONLINE_JUDGE
freopen("in", "r", stdin);
#endif // ONLINE_JUDGE

	int T;
	ll i, j, len, b, d, k;
	string a;
	scanf("%d",&T);
	for(int cas = 1; cas <= T; cas ++){
    cin >> a;
    cin >> b;
    d = 0;
    if(a[0] == '-'){
			j = 1;
    }
    else{
			j = 0;
    }
    len = a.length();
    for(; j < len; j++){
      d = d*10 + (a[j] - '0');

      d = d%b;
      //cout << d << endl;
    }

    printf("Case %d: ", cas);
    if(d){
			printf("not divisible\n");
    }
    else{
      printf("divisible\n");
    }

	}
	return 0;
}
