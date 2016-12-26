#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ll T;
    scanf("%lld",&T);
    for(ll cas = 1; cas<=T; cas++) {
        ll m,n, ans = 0;
        scanf("%lld%lld",&m,&n);
        if(m == 1) {
            ans = n;
        }
        else if(n == 1) {
            ans = m;
        }
        else if(m == 2) {
            ans = (n/4)*4;
            if(n%4 == 1) {
                ans += 2;
            }
            else if(n%4>1) {
                ans +=4;
            }
        }
        else if(n == 2) {
            ans = (m/4)*4;
            if(m%4 == 1) {
                ans += 2;
            }
            else if(m%4>1) {
                ans +=4;
            }
        }
        else {
            ans = ((m*n) + 1)/2;
        }
        printf("Case %lld: %lld\n",cas,ans);
    }
    return 0;
}
