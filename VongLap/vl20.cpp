#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    
    ll n; cin >> n;
    while(n >= 10){
        int tong = 0;
        while(n){
            tong += n % 10;
            n /= 10;
        }
        n = tong;
    }
    cout << n << endl;
    

    return 0;
}