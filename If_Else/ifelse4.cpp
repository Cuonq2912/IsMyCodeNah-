#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, u1, d;
    cin >> n >> u1 >> d;
    int un = u1 + 1ll*(n -1)*d;
    cout << 1ll*n*(u1 + un) / 2;
    return 0;
}