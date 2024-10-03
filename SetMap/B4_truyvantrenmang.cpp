#include<bits/stdc++.h>
using namespace std;


#define FOR(i, a, b) for(int i = a; i < b; i++)
#define f first
#define s second


int main(){
	int n; cin >> n;
	int a[n];

	int q; cin >> q;
	multiset<int> se;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		se.insert(a[i]);
	}
	while(q--){
		int tt, x;
		cin >> tt >> x;
		if(tt == 1) se.insert(x);
		else if(tt == 2){
			auto it = se.find(x);
			if(it != se.end()){
				se.erase(it);
			}
		}
		else if(tt == 3){
			if(se.count(x) != 0){
				cout << "YES\n";

			}
			else{
				cout << "NO\n";
			}
		}
	}
	
	return 0;
}
