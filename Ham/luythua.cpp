#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int  mod = 1e9 + 7;
ll powMod(ll n, ll k){
    ll res = 1;
    n %= mod;
    while(k){
        if(k % 2){
            res = res*n % mod;
        }
        n = (n * n) % mod;
        k /= 2;
        
    }  
    return res;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll a, b;
    cin >> a >> b;
    cout << powMod(a, b);
}

