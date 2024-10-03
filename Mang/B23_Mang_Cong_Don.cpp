#include<bits/stdc++.h>
using namespace std;
#define ll long long;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int a[n], f[n];
    for(int &x : a) cin >> x;
    f[0] = a[0];
    for(int i = 1; i < n; i++){
        f[i] = f[i - 1] + a[i];
    }
    for(int i = 0; i < n; i++) cout << f[i] << " ";
    return 0;
}