#include <bits/stdc++.h>

using namespace std;

int main() {
    int a1, a2, a3, b1, b2, b3, n;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;
    int ta = a1 + a2 + a3;
    int tb = a1 + b2 + b3;
    int ke = ceil(1.0 * ta / 5) + ceil(1.0 * tb / 10);
    if(ke <= n) cout << "YES";
    else cout << "NO";
}