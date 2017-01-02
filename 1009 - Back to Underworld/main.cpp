/**
Idea:

In my code I denoted Vampires and Lykans by two different colors, black and red. At first all
nodes are unassigned. Then I select an unassigned node and make it black (or red).
Then using a BFS, I assign red to every node adjacent to a black node, and assign black
to every node adjacent to a red node. Then I take the maximum between the red and black nodes.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> g[20001];
int visited[20001];
int color[20001];
enum{NOT_VISITED, BLACK, RED};

int bfs(int s){
  queue <int> q;
  int black = 0, red = 0;
  q.push(s);
  color[s] = BLACK;
  black += 1;

  while(!q.empty()){
    int u = q.front(); q.pop();
    for(int i = 0; i< g[u].size(); i++){
      int v = g[u][i];
      if(color[v] == NOT_VISITED){
        q.push(v);

        if(color[u] == BLACK){
          color[v] = RED;
          red++;
        }
        else if(color[u] == RED){
          color[v] = BLACK;
          black++;
        }
      }
    }
  }
  return max(red, black);
}

int main(){
  int T;
  scanf("%d",&T);
  for(int cas = 1; cas <= T;cas++){
    int n;
    scanf("%d",&n);
    for(int i = 0; i<20002; i++){
      g[i].clear();
    }

    for(int i = 0; i<n ;i++){
      int u, v;
      scanf("%d%d",&u,&v);
      g[u].push_back(v);
      g[v].push_back(u);
    }
    int sm = 0;
    memset(color, 0, sizeof(color));
    for(int i = 0;i<20001; i++){
      if(color[i] == 0 && !g[i].empty()){
        sm += bfs(i);
      }
    }
    printf("Case %d: %d\n",cas, sm);

  }
  return 0;
}
