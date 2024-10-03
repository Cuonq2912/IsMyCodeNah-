#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll a, b; cin >> a >> b;
    int l = ceil(sqrt(a));
    int r = sqrt(b);
    cout << r - l + 1;
}