#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    ll gt = 1;
    double e = 1;
    for(int i = 1; i <= n; i++){
        e += 1.0 / gt;
        gt = gt * ( i + 1);
    }
    cout << fixed << setprecision(2) << e << endl;
    return 0;
}