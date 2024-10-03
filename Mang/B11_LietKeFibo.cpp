#include<bits/stdc++.h>
using namespace std;
using ll = long long;
/*
bool FiboCheck(ll n){
    if(n <= 1) return 1;
    int f1 = 1, f2 = 1;
    ll fn = 2;
    for(int i = 3; i <= 92; i++){
        fn = f1 + f2;
        if(fn == n) return 1;
        f1 = f2;
        f2 = fn;
    }
    return 0;
}
*/
ll f[100];

void fibo(){
    f[1] = 0;
    f[2] = 1;
    for(int i = 3; i <= 93; i++){
        f[i] = f[i - 1] + f[i - 2];
    }
}

int tim(ll x){
    for(int i = 1; i <= 93; i++){
        if(f[i] == x) return 1;
    } return 0;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    ll a[n];
    for(ll &x : a){
        cin >> x;
    }
    fibo();
    bool flag = 0;
    for(ll x : a){
        if(tim(x)){
            cout << x << ' ';
            flag = 1;
        }
    }

    /*
    for(int i = 0; i < n; i++){
        if(FiboCheck(a[i])){
            cout << a[i] << ' ';
            dem++;
        }
    }
    cout << dem << endl;*/

    if(!flag) cout << "NONE\n";
}