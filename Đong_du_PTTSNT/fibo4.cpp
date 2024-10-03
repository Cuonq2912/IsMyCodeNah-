#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool snt(int n){
    if(n <= 1) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int tongchuso(int n){
    int tong = 0;
    while(n > 0){
        tong += n%10;
        n /= 10;
    }
    return tong;
}

bool checkFibo(int n){
    if(n <= 1) return 1;
    int f1 = 0, f2 = 1, fn;
    while(fn <= n) {
        fn = f1 + f2;
        if(fn == n) return 1;
        f1 = f2;
        f2 = fn;
    }
    return 0;
}
int main(){
    int n; cin >> n;
    for(int i = 2; i < n; i++){
        if(checkFibo(tongchuso(i)) && snt(i)){
            cout << i << " ";
        }
    }
}