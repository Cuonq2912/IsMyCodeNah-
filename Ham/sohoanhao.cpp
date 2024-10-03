#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool checkprime(ll n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    } return 1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n; cin >> n;
    for(int i = 2; i <= 31; i++){
        if(checkprime(n) && checkprime(pow(2, n)-1)){
            cout << "YES\n";
            return 0;
        }
    }
}