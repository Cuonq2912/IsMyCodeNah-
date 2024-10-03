#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool pt(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            int mu = 0;
            while(n % i == 0){
                n /= i;
                mu++;
            }
            if(mu < 2) return 0;
        }
    }
    if(n  != 1) return 0;
    return 1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a, b;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(pt(i)){
            cout << i << ' ';
        }
    }
}