#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n; cin >> n;
    long long h = n / 3600;
    int m = n % 3600 / 60;
    int s = res % 60;
    cout << h << "h" << " " << ":" << " " << m << "m" << " " << ":" << " " << s << "s";
    return 0;
}