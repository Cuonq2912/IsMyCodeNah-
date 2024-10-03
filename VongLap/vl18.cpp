#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    double tong = 0;
    long long mau = 1;
    for(int i = 0; i <= n -1; i++){
       tong += 1.00/mau;
       mau += mau*i;
       cout << "mau " << mau << endl;
    }
    cout << fixed << setprecision(4) << tong;
    return 0;
}