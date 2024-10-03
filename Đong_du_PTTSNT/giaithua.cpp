#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 10e9 + 7;


int main(){
    int n; cin >> n;
    int ans = 1;
    for(int i = 1; i <= n; i++){
        ans = (ans * i)%mod;
        cout << ans << endl;
    }
}