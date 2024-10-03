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

bool cmp(pair<int, int> a, pair<int, int> b){
	if(a.f == b.f) return a.s <= b.s;
	return a.f <  b.f;
}
int main(){
    Faster();
    int n;
    cin >> n;
    pair<int, int> a[n];
    FOR(i, 0, n){
    	cin >> a[i].f >> a[i].s;
	}
	sort(a, a + n);
	
	ll sum_tg = 0;
	FOR(i, 0, n){
		if(sum_tg < a[i].f){
			sum_tg = a[i].f + a[i].s;
		}
		else{
			sum_tg += a[i].s;
		}
	}
	cout << sum_tg << el;
    return 0;
}
