#include<bits/stdc++.h>
using namespace std;
#define ll long long;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, p;
    cin >> n >> m >> p;
    int a[n], b[m];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    for(int i = n; i >= p; i--){
        a[i] = a[i - m];
    }
    for(int i = p; i < p + m; i++){
        a[i] = b[i - p];
    }
    for(int &x : a) cout << x << ' ';
    return 0;
}
