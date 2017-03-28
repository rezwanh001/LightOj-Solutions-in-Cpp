#include <bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	#endif // ONLINE_JUDGE
	int T;
	scanf("%d",&T);
	for(int cas = 1; cas <= T; cas++){
		string cmd, url;
		vector <string> v;

		v.push_back("http://www.lightoj.com/");
		int pos = 0;
		printf("Case %d:\n",cas);

		while(cin >> cmd , cmd != "QUIT"){
			if(cmd == "VISIT"){
				cin >> url;
				v.resize(pos + 1);
				v.push_back(url);
				cout << v[++pos] << '\n';

			}
			else if(cmd == "BACK"){
				if(pos - 1 < 0){
					cout << "Ignored\n";
				}
				else{
					cout << v[--pos] << "\n";
				}
			}
			else if(cmd == "FORWARD"){
				if(pos + 1 >= int(v.size())){
					cout << "Ignored\n";
				}
				else{
					cout << v[++pos] << "\n";
				}
			}
			//cout<< pos << endl;
		}
	}
	return 0;
}

