#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll T;
    scanf("%lld",&T);
    for(ll cas = 1;cas <= T;cas++){
        ll a,b;
        scanf("%lld%lld",&a,&b);
        printf("Case %lld: %lld\n",cas,a+b);
    }
    return 0;
}
