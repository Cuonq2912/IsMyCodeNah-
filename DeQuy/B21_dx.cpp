#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int dx(int l, int r, int a[]){
    if(l > r) return 1;
    if(a[l] != a[r]) return 0;
    return dx(l+1, r-1, a);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    if(dx(0, n - 1, a)){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}