#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    cout << a[0] << ' ';
    for(int i = 1; i < n; i++){
        if(a[i] != a[i - 1]) cout << a[i] << ' ';
    }
}