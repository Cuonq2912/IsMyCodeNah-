#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int demlan(int n){
    if(n == 1) return 0;
    int x = 1e9, y = 1e9, z = 1e9;
    if(n % 3 == 0){
        x = 1 + demlan(n/3);
    }
    else if(n % 2 == 0){
        y = 1 + demlan(n/2);
    }
    else{
        z = 1 + demlan(n - 1);
    }
    return min({x, y, z});
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    cout << demlan(n);
    return 0;
}