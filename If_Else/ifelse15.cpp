#include <bits/stdc++.h>

using namespace std;

int main () {
    int h, m, k;
    cin >> h >> m >> k;
    k %= 784;
    int tmp = h*28 + m + k;
    tmp %= 784;
    h = tmp / 28; 
    m = tmp % 28;
    cout << setfill('0') << setw(2) << h << "h" << ": " << m << "m";

}