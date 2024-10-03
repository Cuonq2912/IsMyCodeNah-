#include<bits/stdc++.h>
using namespace std;


#define FOR(i, a, b) for(int i = a; i < b; i++)
#define f first
#define s second
#define el endl


int main(){
	int n; cin >> n;
	map<int ,int> mp;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		mp[x]++;
		cout << mp[x] << " ";
	}
	return 0;
}
