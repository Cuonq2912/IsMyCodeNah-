#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int f1 = 1, f2 = 1, fn = 1;
    cout << f1 << endl << f2 << endl;
    for(int i = 2; i <= n; i++){
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
        cout << fn << endl;
    }
    return 0;
}