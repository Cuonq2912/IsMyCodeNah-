#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    ll tong = 0;
    ll gt = 1;
    for(int i = 1; i <= n; i++ ){
        tong += gt;
        gt *= (i + 1);
    }
    cout << tong;
    return 0;
}