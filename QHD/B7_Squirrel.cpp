#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    ll f[n]; // f[i] la chi phi min de di tu 0 den i
    f[0] = 0;
    f[1] = abs(a[1] - a[0]);
    for(int i = 2; i < n; i++){
        // tinh f[i]
        // de den duoc i thi phai nhay tu i - 1 hoac i - 2
        f[i] = min(f[i - 1] + abs(a[i - 1] - a[i]), f[i - 2] + abs(a[i - 2] - a[i]));
    }
    cout << f[n - 1];

    return 0;
}