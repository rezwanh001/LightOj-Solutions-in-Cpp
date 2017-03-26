#include <bits/stdc++.h>
using namespace std;

template <class T> inline T divisors(T n){
  T d = 0, i = 1;
  while ( i <= n){
		if(n%i == 0){
			d++;
		}
		i++;
  }
  return d;
}

bool cmp( pair<int, int> a, pair<int, int> b){
	if(a.first != b.first){
		return (a.first < b.first);
	}
	else{
		return (a.second > b.second);
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	#endif // ONLINE_JUDGE

	int x, T;
	vector <pair <int, int> > arr;

	for(int i = 1; i <= 1000; i++){
		arr.push_back( make_pair( divisors(i), i) );
	}

	sort(arr.begin(), arr.end(), cmp);

	scanf("%d", &T);
	for(int cas = 1; cas <= T; cas ++){
		scanf("%d", &x);
		printf("Case %d: %d\n", cas, arr[x-1].second);
	}
	return 0;
}
