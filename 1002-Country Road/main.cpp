/**
This problem wants you to find the minimum cost to reach every city from a given city(my city).
Here minimum cost signifies the maximum road cost along the path from a city to another city, you have to minimize this cost.
This problem can easily be solved using modified dijkstra.
Set the distance of the start node(my city t) to 0 and then run dijkstra from it.
Instead of adding the road cost to the node in the relax function, you have to relax the current node using the maximum road cost since you have to minimize the maximum road cost in the path.
The relax function can be written like this:
** here u is the source node and v is the destination node and w is the road cost from u to v   and dis array stores the cost of the node upon which we'll relax

if( dis[ v ] > max( w , dis[ u ] ) ) {
    dis[ v ] = max( w , dis[ u ] ) ;
}

Time Complexity: O(E * lg V). E is the number of roads and V is the number of cities.
*/

#include <bits/stdc++.h>
using namespace std;

typedef pair< int, int > pii;
vector< pii > g[567];
int d[567];

int dijkstra(int n, int src) {
  int i,u,v, w;
  queue<int> q;

  for(i=0; i<n; i++){
    d[i] = INT_MAX;
  }
  q.push(src);
  d[src]=0;

  while(!q.empty()) {
    u = q.front();
    q.pop();
    for(i=0; i<g[u].size(); i++) {
      v = g[u][i].first;
      w = g[u][i].second;
      if(d[ v ] > max(w, d[ u ])) {
        d[ v ] = max(w, d[ u ]);
        q.push(v);
      }
    }
  }
  for(i=0; i<n; i++) {
    if(d[i] == INT_MAX){
      printf("Impossible\n");
    }
    else{
      printf("%d\n",d[i]);
    }
  }

}

int main () {
  int n, e, i, j, u, v, w,test,cs=0;
  bool m[567][567];
  scanf("%d",&test);
  for(cs=1; cs<=test; cs++) {
    scanf("%d %d",&n,&e);
    for(i=0; i<n; i++){
      for(j=0; j<n; j++){
        m[i][j]=false;
      }
    }
    for(i = 0; i < n; i++) {
      g[i].clear();
    }
    for(i = 0; i < e; i++) {
      scanf("%d %d %d",&u,&v,&w);

      if(m[u][v]) {
        for(j=0; g[u][j].first != v; j++);
        if(g[u][j].second > w){
          g[u][j].second = w;
        }
      }
      else {
        g[u].push_back(pii(v, w));
        m[u][v]=true;
      }
      if(m[v][u]) {
        for(j=0; g[v][j].first != u; j++);
        if(g[v][j].second > w){
          g[v][j].second = w;
        }
      }
      else {
        g[v].push_back(pii(u, w));
        m[v][u]=true;
      }
    }
    int t;
    scanf("%d",&t);
    printf("Case %d:\n",cs);
    dijkstra(n,t);
  }
  return 0;
}
/**
Input:
2

5 6
0 1 5
0 1 4
2 1 3
3 0 7
3 4 6
3 1 8
1

5 4
0 1 5
0 1 4
2 1 3
3 4 7
1

Output:
Case 1:
4
0
3
7
7
Case 2:
4
0
3
Impossible
Impossible

*/
