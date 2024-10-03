#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    int dem = 0;
    if(n == 0) cout  << "1";
    else {
        while(n) {
            ++dem;
            n /= 10;
        } cout << dem << endl;
    }
    return 0;
}