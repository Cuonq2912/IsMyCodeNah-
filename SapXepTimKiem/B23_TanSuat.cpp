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
    int n; cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
    	cin >> a[i];
    	d[a[i]]++;
    	b[i] = a[i];
	}
	sort(a, a + n, cmp);
	for(int i = 0; i < n; i++) cout << a[i] << ' ';
	cout << el;
	stable_sort(b, b + n, cmp2);
	FOR(i, 0, n){
		if(d[b[i]]){
			for(int j = 0; j < d[b[i]]; j++) cout << b[i] << " ";
			d[b[i]] = 0;
		}
	}

    return 0;
}
