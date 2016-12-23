#include <bits/stdc++.h>
using namespace std;
typedef long long int  ll;
const ll MAXN = 1e8;
double dp[MAXN/100 + 5];
ll n;

void solve(){
    double sm = 1.0;
    dp[0] = 0;
    dp[1] = 1.0;
    for(ll i=2;i<=MAXN; i++){
        sm += (1.0/(double)i);
        if(i%100 == 0){
            dp[i/100] = sm;
        }
    }
}


int main()
{
    solve();
    ll T;
    scanf("%lld",&T);
    for(ll cas= 1;cas<=T;cas++){
        scanf("%lld",&n);

        ll b = n/100;
        double ans = dp[b];
        for(ll i = b*100 + 1;i<=n;i++){
            ans += 1.0/double(i);
        }

        printf("Case %lld: ",cas);
        printf("%.8f\n",ans);

    }
    return 0;
}
