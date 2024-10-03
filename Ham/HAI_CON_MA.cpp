#include<bits/stdc++.h>
using namespace std;
using ll = long long;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    for(int i = 1; i < n; i++){
        ll res1 = 1ll * (i * i) * (i * i - 1) / 2;
        ll res2 = 4ll * (i - 1) * (i - 2);
        cout << res1 - res2;
    }
    return 0;
}