#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll legendre(ll n, int p){
    ll cnt = 0;
    int mod = 1000000007;
    while(n >= p){
        cnt += n /p;
        cnt %= mod;
        n /= p;
    }
    return cnt;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n; cin >> n;
    cout << legendre(n, 5);
}