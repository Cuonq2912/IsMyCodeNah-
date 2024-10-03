#include<bits/stdc++.h>
using namespace std;
using ll = long long;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k; cin >> n >> k;
    int a[n], b[n - k];
    for(int &x : a) cin >> x;
    k %= n;
    //for(int i = n - k; i < n; i++) cout << a[i] << ' ';
    //for(int i = 0; i < n - k; i++) cout << a[i] << ' ';
    for(int i = 0; i < n - k; i++) b[i] = a[i];
    for(int i = 0; i < k; i++) a[i] = a[i + n - k];
    for(int i = k; i < n; i++) a[i] = b[i - k];
    for(int &x : a) cout << x << " ";
    return 0;
}