#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool cp(int n){
    int can = sqrt(n);
    if(can * can == n){
        return true;
    }
    else{
        return false;
    }
}

#define FastIO ios_base::sync_with_stdio(0); cin.tie(0);


int main(){
    FastIO;
    ll n; cin >> n;
    for(int i = 1; i <= n; i++){
        if(cp(i)){
            cout << i << " ";
        }
    }

    return 0;
}