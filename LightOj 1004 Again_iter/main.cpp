#include <bits/stdc++.h>

using namespace std;

int n;
int mat[205][105];

int main(){
#ifndef ONLINE_JUDGE
	freopen("in", "r", stdin);
#endif

	int T;
	scanf("%d",&T);
	for(int cas = 1; cas <= T; cas ++){
		scanf("%d",&n);
		for(int i = 0; i < n; i ++){
      for(int j = 0; j <= i; j ++){
				scanf("%d",&mat[i][j]);
      }
		}
		for(int i = 0; i < n - 1; i ++){
			for(int j = 0; j < n - 1 - i; j ++){
				scanf("%d",&mat[n+i][j]);
			}
		}

		for(int i = 1; i < n; i ++){
      for(int j = 0; j <= i; j++){
				if(i == j){
          mat[i][j] += mat[i-1][j-1];
				}
				else{
					mat[i][j] += max( mat[i-1][j], mat[i-1][j-1] );
				}
      }
		}

		for(int i = 0; i < n - 1; i++){
      for(int j = 0; j < n - 1 - i; j++){
        mat[n+i][j] += max( mat[n+i-1][j], mat[n+i-1][j+1] );
      }
		}

		printf("Case %d: %d\n", cas, mat[2*n-1-1][0] );
	}
	return 0;
}
/**
2

4

7

6 4

2 5 10

9 8 12 2

2 12 7

8 2

10

2

1

2 3

1
*/
