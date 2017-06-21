#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	scanf("%d", &T);
	for(int cas = 1; cas <= T; cas++){
		int n;
		scanf("%d", &n);
		vector <int> v(n);

		for(int i = 0; i < n; i++){
			cin >> v[i];
		}
		int cnt = 0;
		for(int i = 0; i < n; i++){
			int j = i;
			while(j < n && v[j] != (i + 1)){
				j++;
			}
			if(i != j){
				swap(v[i], v[j]);
				cnt ++ ;
			}
		}
		printf("Case %d: %d\n", cas, cnt);
		v.clear();
	}
	return 0;
}
/**
3
4
4 2 3 1
4
4 3 2 1
4
1 2 3 4
*/
