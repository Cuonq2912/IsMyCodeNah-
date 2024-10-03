#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    double x;
    cin >> n >> x;
    if(n % 2 != 0){
        cout << "F = 0" << endl;
        return 0;
    }
    else{
        double F = x, ts = x;
        int ms = 1;
        for(int i = 2; i <= n; i++){
            ts *= x;
            ms *= 3;
            F += ts/ms; 
        }
        cout << fixed << setprecision(3) << F << endl;
    }
    return 0;
}