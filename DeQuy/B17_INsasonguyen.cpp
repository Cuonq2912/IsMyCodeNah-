#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void inphai(ll n){
    if(n < 10) cout << n << ' ';
    else{
        cout << n % 10 << ' ';
        inphai(n/10);
    }
}
ll intrai(ll n){
    if(n < 10) cout << n << ' ';
    else{
        intrai(n/10);
        cout << n % 10 << " ";
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    inphai(n); cout << "\n";
    intrai(n);
    return 0;
}