#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll T;
    scanf("%lld",&T);
    for(ll cas = 1;cas<=T;cas++){
        ll n, x, y;
        scanf("%lld",&n);
        ll m = ceil(sqrt(n));
        ll d = m*m - n;

        if(d < m){
            y = m;
            x = d + 1;
        }
        else{
            x = m;
            y = n - (m-1)*(m-1);
        }

        if(m%2 == 0){
            swap(x,y);
        }
        printf("Case %lld: %lld %lld\n",cas,x,y);

    }
    return 0;
}
/**
input:
3
8
20
25
output:
Case 1: 2 3
Case 2: 5 4
Case 3: 1 5
*/
