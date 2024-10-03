#include <bits/stdc++.h>

using namespace std;

int main() {
    long long k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;
    long long tong = 0;
    long long k256 = min({k2, k5, k6});
    tong += k256 * 256;
    long long k32 = min(k3, k2 - k256);
    tong += k32 * 32;
    cout << tong;
}