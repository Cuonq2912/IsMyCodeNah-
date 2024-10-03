#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool isFibonacci(int n){
    if(n <= 1) return 1;
    int f1 = 0, f2 = 1, fn = 1;
    while(fn <= n){
        fn = f1 + f2;
        if(fn == n) return 1;
        f1 = f2;
        f2 = fn;
    }
    return 0;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T; cin >> T;
    for(int i = 1; i <= T; i++){
        ll N; cin >> N;
        if(isFibonacci(N)){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}
