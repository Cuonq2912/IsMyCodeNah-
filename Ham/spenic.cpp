
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll checkspenic(ll n){
    int dem = 0;
    for(int i = 2; i <= sqrt(n); i++){
        while(n % i == 0){
            dem += 1;
            n /= i;
        }
    }
    if(n > 1) dem += 1;  
    if(dem == 3) return 1;
    else return 0;
}

int main(){
    ll n; cin >> n;
    if(checkspenic(n)) cout << 1;
    else cout << 0;
}