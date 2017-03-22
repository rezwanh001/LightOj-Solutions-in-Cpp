#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pi acos(-1)

int main(){
#ifndef ONLINE_JUDGE
	freopen("in","r", stdin);
#endif // ONLINE_JUDGE
  int T;
  scanf("%d",&T);
  for(int cas = 1; cas <= T; cas += 1){
    double R; int n;
    cin >> R >> n;
    double r = ( R*sin(pi/n) ) / ( sin(pi/n)+1 );
//    cout << r << endl;
		printf("Case %d: %lf\n", cas, r);
  }

	return 0;
}
