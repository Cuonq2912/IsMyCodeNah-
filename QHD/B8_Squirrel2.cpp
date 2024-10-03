#include<bits/stdc++.h>
using namespace std;
using ll = long long;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    ll f[n];
    f[0] = 0;
    f[1] = abs(a[1] - a[0]);
    for(int i = 2; i < n; i++){
        f[i] = 1e15;
        for(int j = max(i - k, 0); j < i; j++){
            f[i] = min(f[i], (f[j] + abs(a[i] - a[j])));
        }
    }
    cout << f[n - 1];
    return 0;
}