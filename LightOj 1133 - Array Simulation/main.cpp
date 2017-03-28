#include <bits/stdc++.h>
using namespace std;

int arr[123];

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif // ONLINE_JUDGE

	ios::sync_with_stdio(false);
	int T;
	cin >> T;
	for(int cas = 1; cas <= T; cas++) {
		int n,m;
		vector<int> v;
		cin>>n>>m;
		for(int i = 0; i <n; i++) {
			int x;
			cin>> x;
			v.push_back(x);
		}
		for(int i = 0; i < m; i++) {
			char c;
			cin>> c;
			if(c == 'P') {
				int y,z;
				cin>>y>>z;
				swap(v[y],v[z]);
			} else if(c == 'S') {
				int d;
				cin>>d;
				for(int j = 0; j < v.size(); j++) {
					v[j]+=d;
				}
			} else if(c == 'R') {
					reverse(v.begin(),v.end());
			} else if(c == 'M') {
				int d;
				cin>>d;
				for(int j = 0; j < v.size(); j++) {
					v[j]*=d;
				}
			} else if(c == 'D') {
				int k;
				cin>>k;
				for(int j = 0; j < v.size(); j++) {
					v[j]/=k;
				}
			}
		}
		printf("Case %d:\n",cas);
		for(int i = 0; i < v.size(); i++) {
			if (i) putchar(' ');
			printf("%d", v[i]);
		}
		puts("");
		v.clear();
	}
	return 0;
}
