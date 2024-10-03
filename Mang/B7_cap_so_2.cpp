#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int a[n];
    int tmp = 1e9;
    for(int &x : a) cin >> x;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            tmp = min(tmp, abs(a[i] - a[j]));
        }
    }
    cout << tmp << endl;
}