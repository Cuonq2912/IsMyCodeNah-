#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll const_nb = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int sum = 0, tich = 1;
    for(int x : a){
        sum += x; sum %= const_nb;
        tich *= x; tich %= const_nb;
    }
    cout << sum % const_nb << endl << tich % const_nb;
}