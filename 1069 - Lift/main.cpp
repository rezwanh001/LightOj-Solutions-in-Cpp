#include <bits/stdc++.h>

using namespace std;

#define d 4
#define nu (3+5+3)
#define sesh (3+5)

int main() {
#ifndef ONLINE_JUDGE
    freopen("in", "r", stdin);
#endif // ONLINE_JUDGE


	int T,m,l,sum=0;
	cin>>T;
	for(int line=1; line<=T; line++) {
			cin>>m>>l;

			sum=0;
			if(m<=l) {
					for(int i=l; i>=0; i--) {
							if(i==m) {
									sum=sum+nu;
							}
							if(i!=m) {
									sum=sum+d;
							}
							if(i==0) {
									sum=sum+sesh;
							}

					}
					printf("Case %d: %d\n",line,sum);
			} else {
					for(int i=l; i<=m; i++) {
							if(i==m) {
									sum=sum+nu;
							}
							if(i!=m) {
									sum=sum+d;
							}
					}
					for(int i=m; i>=0; i--) {
							if(i==0) {
									sum=sum+sesh;
							}
							//if(i==m){sum=sum+nu;}
							if(i!=m) {
									sum=sum+d;
							}
					}
					printf("Case %d: %d\n",line,sum);
			}

	}

    /**
    int T;
    scanf("%d",&T);
    for(int cas = 1; cas <= T; cas ++){
    	int sm = 0;
    	int m, l;
    	scanf("%d %d", &m, &l);
    	if(m<=l){
    		for(int i = l; i >= 0; i--){
    			if(i == m) { sm += nu; }
    			if(i != m) { sm += d; }
    			if(i == 0) { sm += sesh; }
    		}
    		printf("Case %d: %d\n",cas, sm);
    	}
    	else{
    		for(int i = 1; i <= m; i++){
    			if(i == m) { sm += nu; }
    			if(i != m) { sm += d; }
    		}
    		for(int i = m; i >= 0; i--){
    			if(i == 0) { sm += sesh; }
    			if(i != m) { sm += d; }
    		}
    		printf("Case %d: %d\n",cas, sm);
    	}
    }
    */

	return 0;
}
