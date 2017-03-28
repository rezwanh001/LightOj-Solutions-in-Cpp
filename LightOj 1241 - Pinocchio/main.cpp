#include <bits/stdc++.h>
using namespace std;

int arr[50];

int main(){
#ifndef ONLINE_JUDGE
freopen("in", "r", stdin);
#endif // ONLINE_JUDGE

	int T;
	set <int> st;
	scanf("%d",&T);
	for(int cas = 1; cas <= T; cas++){
		int n, x;
		arr[0] = 2;
		scanf("%d", &n);
		for(int i = 1; i <= n; i++){
      scanf("%d", &x);
      //st.insert(x);
      arr[i] = x;
		}
		int cnt = 0;
		for(int i = 0; i < n; i++){
			if(arr[i + 1] > arr[i]){
        cnt += ceil((arr[i+1] - arr[i])/5.0);
			}
		}
    printf("Case %d: %d\n",cas, cnt);
    //st.clear();
	}
	return 0;
}
