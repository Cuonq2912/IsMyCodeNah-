#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool snt(ll n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int demuoc(ll n){
    int dem = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0 && snt(i)){
            dem++;
        }
    }
    return dem;
}

int main(){
    ll n; cin >> n;
    cout << demuoc(n);
    return 0;
}

