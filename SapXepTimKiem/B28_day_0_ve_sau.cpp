#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define el "\n"
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f first
#define s second
#define pb push_back
#define FOR(i, a, b) for(int i = a; i < b; i++)


int main(){
	faster();
	int n; cin >> n;
	int a[n], d = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i] == 0) d++;
	}
	for(int i = 0; i < n; i++){
		if(a[i]) cout << a[i] << " ";
	}
	while(d--) cout << "0" << " ";
	cout << el;
	return 0;
}