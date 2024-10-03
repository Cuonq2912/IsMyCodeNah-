#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    long long s;
    cin >> n >> s;
    if(s > n) {
        if(s % n == 0) {
            cout << s / n;
        } cout << s / n + 1;
    } else cout << 1;
    return 0;
}