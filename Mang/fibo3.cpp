#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll F[100];
    F[0] = 1; F[1] = 1;
    for(int i = 2; i <= 93; i++){
        F[i] = F[i-1] + F[i-2];
    }
    ll n; cin >> n;
    for(int i = 0; i < 93; i++){
        if(F[i] >= n){
            cout << F[i];
            return 0;
        }
    }
}