#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool snt(ll k){
    if(k < 2) return 0;
    for(int i = 2; i <= sqrt(k); i++){
        if(k % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n; cin >> n;
    ll tong = 0;
    int dem = 0;
    for(int i = 2; i <= n; i++){
        if(snt(i)){
            tong += i;
            dem++;
        }
    }
    cout << tong << " " << dem << endl;
    return 0;
}