#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, p;
    cin >> n >> m >> p;
    vector<int> a(n), b(m);
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    vector<int> res;
    for(int i = 0; i < p; i++){
        res.push_back(a[i]);
    }
    for(int i = 0; i < m; i++){
        res.push_back(b[i]);
    }
    for(int i = p; i < n; i++){
        res.push_back(a[i]);
    }
    for(int &x : res) cout << x << ' ';
    return 0;
}