#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll phi(ll n){
    ll res = n;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            res -= res / i;
            while(n % i == 0) n /= i;
        }
    if(n > i) res -= res / n;
    return res;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    cout << phi(n);

}