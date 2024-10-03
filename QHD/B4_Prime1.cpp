#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll prime[1000001];

void sang(ll n){
    for(int i = 0; i <= n; i++){
        prime[i] = 1;
    }
    prime[0] = 0;
    prime[1] = 0;
    for(int i = 2; i * i <= n; i++){
        if(prime[i]){
            for(int j = i * i; j <= n; j += i){
                prime[j] = 0;
            }
        }
    }
}

int main(){
    ll n; cin >> n;
    sang(sqrt(n));
    for(ll i = 2; i * i <= n; i++){
        if(prime[i]){
            cout << i*i << ' ';
        }
    }
}