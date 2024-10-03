#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int dem(ll n){
    int res = 1;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            int mu = 0;
            while(n % i == 0){
                n /= i;
                mu++;
            }
            res *= (mu + 1);
        }
    }
    if(n /= 1) res *= 2;
    return res;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    cout << dem(n);
}