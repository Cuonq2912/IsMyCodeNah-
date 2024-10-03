#include <iostream>
#include <math.h>
using namespace std;

void solve(int n) {
    int m = pow(2, n);
    for (int i = 1; i < m; i++) {
        int disc = __builtin_ctz(i) + 1;
        int from = ((i & i - 1) % 3) + 1;
        int to = (((i | i - 1) + 1) % 3) + 1;
        cout << "MOVE T" << from << " T" << to << "\n";
    }
}

int main() {
    int n;
    cin >> n;
    solve(n);
    return 0;
}
