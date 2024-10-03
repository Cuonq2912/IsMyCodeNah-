#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int d[10];
void dem(ll n){
    while(n){
        d[n%10]++;
        n /= 10;
    }
}
ll dem2(ll n){
    ll m = 0;
    while(n){
        m = m * 10 + n % 10;
        n /= 10;
    }
    while(n){
        int i = m % 10;
        if((i == 2 || i == 3 || i == 5 || i == 7) && d[i] != 0){
            cout << i << ' ' << d[i] << "\n";
            d[i] = 0;
        }
        m /= 10;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    dem(n);
    for(int i = 2; i < 10; i++){
        if((i == 2 || i == 3 || i == 5 || i == 7) && d[i] != 0){
            cout << i << ' ' << d[i] << '\n';
        }
    } cout << '\n';
    dem2(n);
    return 0;
} 
