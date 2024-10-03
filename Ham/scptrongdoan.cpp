#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool scp(ll n){
    int can = sqrt(n);
    return can * can == n;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll a, b; cin >> a >> b;
    for(int i = ceil(sqrt(a)); i <= floor(sqrt(b)); i++){
        cout << i*i << " ";
    }
    return 0;
}