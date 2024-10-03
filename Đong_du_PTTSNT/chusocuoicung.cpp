#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    int n, m, k;
    int ans = 1;
    cin >> n >> m >> k;
    int mod = 1;
    for(int i = 1; i<= k; i++){
        mod *= 10;
    }
    for(int i = 1; i <= m; i++){
        ans = (ans*n) % mod;
    }
    cout << ans;
}