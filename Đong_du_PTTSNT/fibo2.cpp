#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool fibocheck(ll n){
    if(n <= 1){
        return 1;
    }
    int f1 = 1, f2 = 1;
    ll fn = 2;
    for(int i = 3; i <= 92; i++){
        fn = f1 + f2;
        if(fn == n) return 1;
        if(fn > n) return 0;
        f1 = f2;
        f2 = fn;
    }
    return 0;
}
    int main(){
    ll n; cin >> n;
    if(fibocheck(n)){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
}
