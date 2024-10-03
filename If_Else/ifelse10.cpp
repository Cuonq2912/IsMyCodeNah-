#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    if((a + b + c + n) % 3 == 0) {
        int msa = (a + b + c + n) / 3;
        if(msa >= a && msa >= b && msa >= c) {
            cout << "YES";
        } else cout << "NO";  
    } else cout << "NO";
    return 0;
}