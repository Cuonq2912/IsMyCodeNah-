#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    cin >> a >> b;

    // In ra các s? nguyên t? trong kho?ng [a, b]
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }

    return 0;
}
