# include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    ll tich = 1;
    for(int i = 1; i <= sqrt(n); i++) {
        if(n % i == 0){
            tich *= i;
            if(i != n / i){
                tich *= n / i;
            }
        }
    } cout << tich;
    return 0;
}