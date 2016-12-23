#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
int n ,s, t, c;
int u ,v, w;
int CS;
int flow,ans;
int k ,p;

vector < vector < pii > > g;
int a[110][110];
int parent[110];

int dfs() {
    int vis[110];
    int top;
    int x;

    memset(vis, 0, sizeof vis);
    stack <int> st;
    st.push(s);
    vis[s] = 1;

    while(!st.empty()) {
        top = st.top();
        st.pop();
        for (int i = 0; i < g[top].size(); i++) {
            x = g[top][i].first;
            if(a[top][x] > 0 and vis[x] == 0) {
                st.push(x);
                vis[x] = 1;
                parent[x] = top;
            }
        }
    }
    return vis[t] == 1;
}

int bfs() {
    int vis[110];
    int front;
    int x;

    memset(vis, 0, sizeof vis);
    queue <int> q;
    q.push(s);
    vis[s] = 1;

    while(!q.empty()) {
        front = q.front();
        q.pop();
        for (int i = 0; i < g[front].size(); i++) {
            x = g[front][i].first;
            if(a[front][x] > 0 and vis[x] == 0) {
                q.push(x);
                vis[x] = 1;
                parent[x] = front;
            }
        }
    }
    return vis[t] == 1;
}

int fordFulkerson() {
    ans = 0;
    while(bfs()) { /// bfs or dfs
        k = t;
        flow = INT_MAX;

        while(k != s) {
            p = parent[k];
            flow = min(flow, a[k][p]);
            k = parent[k];
        }
        k = t;

        while(k != s) {
            p = parent[k];
            a[k][p] -= flow;
            a[p][k] -= flow;
            k = parent[k];
        }
        ans += flow;
    }
    return ans;
}


int main() {
    scanf("%d", &CS);
    for (int cs = 1; cs <= CS; cs++) {
        scanf("%d",&n);
        scanf("%d%d%d",&s,&t,&c);

        memset(a, 0, sizeof(a));
        vector < vector < pii > > tag(n+2);

        swap(tag, g);

        for (int i = 0; i < c; i++) {
            scanf("%d", &u);
            scanf("%d", &v);
            scanf("%d", &w);
            a[u][v] += w;
            a[v][u] += w;
            g[u].push_back(make_pair(v, w));
            g[v].push_back(make_pair(u, w));
        }
        printf("Case %d: %d\n", cs, fordFulkerson());
    }
    return 0;

}
/**
2
4
1 4 5
1 2 20
1 3 10
2 3 5
2 4 10
3 4 20
4
1 4 2
1 4 20
1 4 20
*/
