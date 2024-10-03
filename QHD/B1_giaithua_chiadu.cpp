#include<bits/stdc++.h>
using namespace std;
using ll = long long;

long long mod = 1e9 + 7;
long long F[1000001];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    F[0] = 1;
    for(int i = 1; i <= 1000000; i++){
        F[i] = i* F[i - 1];
        F[i] %= mod;
    }
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << F[n] << endl;
    }
}