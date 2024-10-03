#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll a, b;
    cin >> a >> b;
    int k = min(a, b);
    int gt = 1;
    for(int i = 1; i <= k; i++) gt *= i;
    cout << gt;
    return 0;
}