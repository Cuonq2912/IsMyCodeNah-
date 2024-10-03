#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll fibo[1000000];
int mod = 1e9 + 7;


void sang_fibo_chiadu(){
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i = 2; i < 1000000; i++){
        fibo[i] = fibo[i - 1] % mod + fibo[i - 2] % mod; 
        fibo[i] %= mod;
    }
}

int main(){
    sang_fibo_chiadu();
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        cout << fibo[n] << "\n";
    }
    return 0;
}