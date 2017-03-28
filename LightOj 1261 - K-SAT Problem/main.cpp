#include <bits/stdc++.h>
using namespace std;

map<int, bool> mp;
int arr[33][33];

int main(){
#ifndef ONLINE_JUDGE
freopen("in", "r", stdin);
#endif // ONLINE_JUDGE

  int T;
  scanf("%d", &T);
  for(int cas = 1; cas <= T; cas ++){
		mp.clear();
		int n, m, K;
		scanf("%d%d%d", &n,&m,&K);

		for(int i = 0; i < n ; i++){
      for(int j = 0; j < K; j++){
        cin >> arr[i][j];
      }
		}

		int p;
		scanf("%d", &p);
		while(p--){
      int x;
      scanf("%d", &x);
      mp[x] = true;
		}

		bool f = false, fl = true;
		int tmp;
		for(int i = 0; i < n; i++){
      f = false;
      for(int j = 0; j < K; j++){
        if(arr[i][j] >0 && mp[ arr[i][j] ]){
          f = true;
        }
        if(arr[i][j] < 0){
					tmp = -arr[i][j];

					if(!mp[tmp]){
						f = true;
					}
        }
      }

      if(!f){
				fl = false;
			}

		}

		if(fl){
			printf("Case %d: Yes\n",cas);
		}
		else{
			printf("Case %d: No\n",cas);
		}
  }
  return 0;
}
