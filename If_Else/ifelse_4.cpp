#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, u1, d;
    cin >> n >> u1 >> d;
    int un = u1 + (n -1)*d;
    cout << n*(u1 + un) / 2;
    return 0;
}