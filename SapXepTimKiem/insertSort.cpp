#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define el "\n"
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f first
#define s second
#define pb push_back
#define FOR(i, a, b) for(int i = a; i < b; i++)

void insertSort(int a[], int n){
	for(int i = 1; i < n; i++){
		int x = a[i], pos = i - 1;
		while(pos >= 0 && a[pos] > x){
			a[pos + 1] = a[pos];
			--pos;
		}
		a[pos + 1] = x;
	}
}

int main(){
	faster();
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	insertSort(a, n);
	for(int &x : a) cout << x << " ";
	return 0;
}
