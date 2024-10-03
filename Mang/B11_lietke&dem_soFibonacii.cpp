#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool FiboCheck(ll n){
    if(n <= 1) return 1;

    int f1 = 1, f2 = 1;
    for(int i = 3; i <= 92; i++){
        ll fn = f1 + f2;
        if(fn == n) return 1;
        f1 = f2;
        f2 = fn;
    }
    return 0;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    int dem = 0;
    int a[n];
    bool flag = 0;
    for(int i = 0; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(FiboCheck(a[i])){
            cout << a[i] << ' ';
            dem++;
        }
    }
    cout << dem << endl;
    if(!dem) cout << "NONE\n";
}