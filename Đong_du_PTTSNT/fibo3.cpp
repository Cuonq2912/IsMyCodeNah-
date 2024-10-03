#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll findFibo(ll n){
    if(n <= 1) return 1;
    ll f1 = 1, f2 = 1, fi = 2;
    while(fi < n){
        fi = f1 + f2;
        f1 = f2;
        f2 = fi;
    }
    return 0;
}
int main(){
    ll n; cin >> n;
    cout << findFibo(n);
    
 }