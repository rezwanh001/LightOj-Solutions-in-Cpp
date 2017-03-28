#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, string > a, pair<int, string> b){
  return a.first < b.first;
}

int main(){
#ifndef ONLINE_JUDGE
freopen("in", "r", stdin);
#endif // ONLINE_JUDGE
	int T;
	vector <pair < int , string > > vpr;

	int a, b , c, n;
	int res;
	string st;
	scanf("%d", &T);

	for(int cas = 1; cas <= T; cas++){
		scanf("%d", &n);
		for(int i = 0; i < n; i++){
			cin >> st;
			scanf("%d%d%d",&a,&b,&c);
			res = (a*b*c);
      vpr.push_back(make_pair(res, st));
		}
		sort(vpr.begin(), vpr.end(), cmp);
    printf("Case %d: ", cas);
    if(vpr[0].first < vpr[n-1].first){
      printf("%s took chocolate from %s\n", (vpr[n-1].second).c_str(), (vpr[0].second).c_str() );
    }
    else{
      puts("no thief");
    }
    vpr.clear();
	}
	return 0;
}
