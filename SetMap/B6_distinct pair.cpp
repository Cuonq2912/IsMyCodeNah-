#include<bits/stdc++.h>
using namespace std;


#define FOR(i, a, b) for(int i = a; i < b; i++)
#define f first
#define s second
#define el endl


int main(){
	int n; cin >> n;
	set<pair<int, int>> se;
	for(int i = 0; i < n; i++){
		int x, y;
		cin >> x >> y;
		se.insert({x, y});
	}
	cout << se.size();
	return 0;
}
