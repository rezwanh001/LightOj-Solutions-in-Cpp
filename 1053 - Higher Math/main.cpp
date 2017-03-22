#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("in", "r", stdin);
#endif // ONLINE
    int T;
    scanf("%d",&T);
    for(int cas = 1; cas <= T; cas ++) {
        int a,b,c;
        scanf("%d%d%d", &a, &b,&c);
        int arr[3] = {a,b,c};
        sort(arr, arr + 3);
        int x = arr[0], y = arr[1], z = arr[2];
        //cout<< x << " " << y << endl;

        int Z = (int) sqrt( (ll)((x*x) + (y*y)) );
        //cout<< Z << endl;
        if ( z == Z ) {
            printf("Case %d: yes\n",cas);
        } else {
            printf("Case %d: no\n",cas);
        }
    }
    return 0;
}
