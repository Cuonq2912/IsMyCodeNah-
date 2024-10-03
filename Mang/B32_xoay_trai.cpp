#include<bits/stdc++.h>
using namespace std;
using ll = long long;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k; cin >> n >> k;
    int a[n], b[k];
    for(int &x : a) cin >> x;
    //for(int i = k ; i < n; i++) cout << a[i] << ' ';
    //for(int i = 0; i < k; i++) cout << a[i] << " ";
    k %= n;
    for(int i = 0; i < k; i++) b[i] = a[i];
    for(int i = 0; i < n - k; i++) a[i] = a[i + k];
    int j = 0;
    for(int i = n - k; i < n; i++) a[i] = b[j], j++;
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}