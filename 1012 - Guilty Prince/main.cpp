#include <bits/stdc++.h>
using namespace std;

int W, H;
int visited[100][100];
string s[21];
int cnt = 0;

int dfs(int rootx ,int rooty){
  visited[rootx][rooty] = 1;
  if(s[rootx][rooty] == '#'){
    return 0;
  }
  cnt += 1;

  if( (rootx - 1 >= 0 && rootx - 1 < H) && (rooty >= 0 && rooty < W)){
    if(visited[rootx - 1][rooty] == 0){
      dfs(rootx - 1, rooty);
    }
  }

  if( (rootx + 1 >= 0 && rootx + 1 < H) && (rooty >= 0 && rooty < W) ){
    if(visited[rootx + 1][rooty] == 0){
      dfs(rootx + 1, rooty);
    }
  }

  if( (rootx >=0 && rootx < H) && (rooty - 1 >= 0 && rooty - 1 < W) ){
    if(visited[rootx][rooty - 1] == 0){
      dfs(rootx, rooty - 1);
    }
  }

  if( (rootx >= 0 && rootx < H) && (rooty + 1 >= 0 && rooty + 1 < W )){
    if(visited[rootx][rooty + 1] == 0){
      dfs(rootx, rooty + 1);
    }
  }

}

int main()
{
  int T;
  int rootx, rooty;
  scanf("%d",&T);
  for(int cas = 1; cas <= T; cas++){
    memset(visited, 0, sizeof visited);
    cnt = 0;
    scanf("%d%d",&W,&H);
    for(int i =0 ;i <H;i++){
      cin>> s[i];
      for(int j = 0; j<s[i].size();j++){
        if(s[i][j] == '@'){
          rootx = i;
          rooty = j;
        }
      }
    }
    dfs(rootx, rooty);
    printf("Case %d: %d\n", cas,cnt);

  }
  return 0;
}
