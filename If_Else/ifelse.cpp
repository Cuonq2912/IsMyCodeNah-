#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int min, max = n;
    if(n % 2 == 0) {
        min = n / 2;
    } else {
        min = n / 2 + 1;
    } 
    if(min % m == 0){
        cout << min << endl;
    } else {
        int res = (min / m + 1) * m;
        if(res <= max) {
            cout << res;
        } else cout << "-1";
    }
    /*
    if(n % 2 == 0) {
        int minstep = n / 2;
        int maxstep = n;
        int p = (minstep + m - 1) / m * m;
        if(p <= maxstep) cout << p;
        else cout << "-1";
    } else {
        int minstep = n / 2 + 1;
        int maxstep = n;
        int p = (minstep + m - 1) / m * m;
        if(p <= maxstep) cout << p;
        else cout << "-1";
    }
    */
    return 0;
}