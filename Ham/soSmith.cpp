#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int tcs(int n){
    int tong = 0;
    while(n){
        tong += n % 10;
        n /= 10;
    }
    return tong;
}
bool pt(int n){
    int tong1 = tcs(n);
    int tong2 = 0;
    int tmp = n;
    for(int i = 2; i<= sqrt(n); i++){
        if(n % i == 0){
            while(n % i == 0){
                tong2 += tcs(i);
                n /= i;
            }
        }
    }
    if(n != 1){
        tong2 += tcs(n);
    }
    if(tong1 == tong2 && tmp != n) return true;
    return 0;
}

int main(){
    int n; cin >> n;
    if(pt(n)) cout << 1;
    else cout << 0;
}