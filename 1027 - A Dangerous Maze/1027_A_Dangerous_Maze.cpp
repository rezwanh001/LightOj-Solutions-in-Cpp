#include <bits/stdc++.h>
using namespace std;

int arr[12345];
int main(){
	int T;
	scanf("%d",&T);
	for(int cas =1 ;cas<= T;cas++){
    int n,sm = 0;
    int flag = 0;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
      scanf("%d",&arr[i]);
      if(arr[i] < 0){
        flag ++;
      }
      sm += abs(arr[i]);
    }
    if(flag == n){
      printf("Case %d: inf\n", cas);
    }
    else{
      n -= flag;
      for(int i = min(n ,sm); i>=0 ;i--){
        if(n % i == 0 && sm % i == 0){
          n /= i;
          sm /= i;
          break;
        }
      }
      printf("Case %d: %d/%d\n", cas, sm, n);
    }
  }	
  return 0;
 }
		
