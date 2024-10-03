#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool stncheck(ll n){
    int rev = 0;
    long long N = n;
    while(n){
        rev = rev*10 + n % 10;
        n /= 10;
    }
    return rev == N;
}
int stn(ll n){
    n /= 10;
    ll rev = 0;
    while(n > 9){
        rev = rev*10 + n % 10;
        n /= 10;
    }
    return stncheck(rev) ;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    return stn(n) && stncheck(n);
}