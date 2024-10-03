#include<bits/stdc++.h>
using namespace std;
using ll = long long;


// cách 1
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, x, k;
    cin >> n >> x >> k;
    int a[n + 1];
    for(int &x : a) cin >> x;
    for(int i = n; i >= k; i--) a[i] = a[i - 1];
    a[k - 1] = x;
    for(int &x : a) cout << x << " ";
    return 0;
}
/*
// cách 2
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, x, k;
    cin >> n >> x >> k;
    int a[n];
    for(int &x : a) cin >> x;
    for(int i = 0; i < k - 1 ; i++){
        cout << a[i] << " ";
    } cout << x << " ";
    for(int i = k - 1 ; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}
*/