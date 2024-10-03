#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int uocntmax(int n){
    int res;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            res = i;
            while(n % i == 0){
                n /= i;
            }
        }
    }
    if(n != 1) return n;
    return res;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << uocntmax(n) << endl;
    }
    
}