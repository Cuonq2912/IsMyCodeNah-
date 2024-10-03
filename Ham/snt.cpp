#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
#define FastIO ios_base::sync_with_stdio(0); cin.tie(0);

bool snt(ll n){
    if(n < 2) return false;
    else{
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                return false;
            }
        }
        return true;
    }
}
int main(){
    FastIO;
    ll n; cin >> n;
    if(snt(n)){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}