#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll F[100];
    F[0] = 0; F[1] = 1; F[2] = 1;
    for(int i = 3; i <= 92; i++){
        F[i] = F[i-1] + F[i-2];
    }
    ll k; cin >> k;
    for(int i = 0; i <= 92; i++){
        if(k == F[i]){
            cout <<"YES\n";
            return 0;
        }
    }
    cout << "NO\n";
}