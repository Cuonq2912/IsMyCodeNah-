#include<bits/stdc++.h>
using namespace std;


#define FOR(i, a, b) for(int i = a; i < b; i++)
#define f first
#define s second
#define el endl


int main(){
	int n; cin >> n;
	set<char> se;
	for(int i = 0; i < n; i++){
		char x;
		cin >> x;
		se.insert(x);
	}
	cout << se.size() << el;
	for(auto it = se.begin(); it != se.end(); ++it){
		cout << *it << " ";
	}cout << el;
	for(auto it = se.rbegin(); it != se.rend(); ++it){
		cout << *it << " ";
	}cout << el;
	return 0;
}
