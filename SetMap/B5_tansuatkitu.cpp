#include<bits/stdc++.h>
using namespace std;


#define FOR(i, a, b) for(int i = a; i < b; i++)
#define f first
#define s second
#define el endl


int main(){
	int n; cin >> n;
	map<char, int> mp;
	for(int i = 0; i < n; i++){
		char x; cin >> x;
		mp[x]++;
	}
	cout << mp.begin()->f << " " << mp.begin()->s << el << el;
	cout << mp.rbegin()->f << " " << mp.rbegin()->s << el << el;
	for(auto it = mp.begin(); it != mp.end(); ++it){
		cout << it->f << " " << it->s << el;
	}cout << el;
	for(auto it = mp.rbegin(); it != mp.rend(); ++it){
		cout << it->f << " " << it->s << el;
	}
	return 0;
}
