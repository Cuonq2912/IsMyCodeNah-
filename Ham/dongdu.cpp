#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    int n; cin >> n;
    ll tong = 0;
    ll mod = 1000007;
    for(int i = 1; i <= n; i++){
        ll x; cin >> x;
        tong += (x % mod);
        tong %= mod;
    }
    cout << tong << endl;
}