#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll legendre(ll n, int p){
    ll cnt = 0;
    while(n >= p){
        cnt += n / p;
        n /= p;
    }
}
int main(){
    ll n; int p;
    cin >> n >> p;
    cout << legendre(n, p);
}