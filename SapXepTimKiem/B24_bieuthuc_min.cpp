#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define el '\n'
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define FORD(i, a, b) for(int i = a; i > b; i--)
#define f first
#define s second
#define pb push_back
#define Faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int d[1000006];
bool cmp(int a, int b){
	if(d[a] == d[b]) return a < b;
	return d[a] > d[b];
}
bool cmp2(int a, int b){
	return d[a] > d[b];
}
int main(){
    Faster();
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
    	cin >> a[i];
	}
	sort(a + 1, a + n, greater<int>());
	int ans = a[0];
	FOR(i, 1, k+1){
		ans += a[i];
	}
	FOR(i, k+1, n){
		ans -= a[i];
	}
	cout << ans;
    return 0;
}
