#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;

int main(){
    int n; cin >> n;
    int ans = 0;
    for(int i = 1; i <=n; i++){
        ll x; cin >> x;
        ans = (ans + x)% mod;
    }
    cout << ans;
    return 0;
}