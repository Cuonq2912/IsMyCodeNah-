#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int scp(ll n){
    ll can = sqrt(n);
    return can * can == n;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n; cin >> n;
    if(scp(n)) cout << "YES";
    else cout << "NO";
}