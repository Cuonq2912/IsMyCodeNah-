#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    ll tong = 0;
    for(int i = 1; i <= n; i++) {
        int t;
        cin >> t;
        if(t % 2 == 0){
            tong += t;
        }
    }
    cout << tong << endl;
    return 0;
}