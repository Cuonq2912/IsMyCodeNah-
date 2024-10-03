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
	int n, l;
    cin >> n >> l;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    double max_kc = 0;
    for(int i = 0; i < n - 1; i++){
        max_kc = max(max_kc, 1.00*a[i + 1] - a[i]);
    }
    double tmp = 1.00*max_kc/2.00;
    max_kc = max({1.00*a[0], 1.00*l - a[n-1], tmp});
    cout << fixed << setprecision(10) << max_kc;
	return 0;
}