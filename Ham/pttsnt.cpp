#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void pt(ll n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            while(n % i == 0){
                cout << i << " ";
                n /= i;
            }
        }
    }
    if(n != 1 ){
        cout << n << endl;
    }
}
int main(){
    ll n; cin >> n;
    pt(n);
}