#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll a, b, c, d, e, f;
ll dp[ 10005];
ll fn( ll n ) {
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    if( dp[n] != -1) return dp[n];
    dp[n] = ( ( fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) )%10000007 );
    return dp[n];
}
int main() {
    ll n, caseno = 0, cases;
    scanf("%lld", &cases);
    while( cases-- ) {
        memset(dp, -1, sizeof dp);
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
        n = n%10000007;
        printf("Case %lld: %lld\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}
