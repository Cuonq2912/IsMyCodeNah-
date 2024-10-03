#include<bits/stdc++.h>
using namespace std;
using ll = long long;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int a[n], b[n -1];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n - 1; i++) cin >> b[i];
    for(int i = 0; i < n; i++){
        if(b[i] == 2) a[i + 1] = -a[i + 1];
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
    }
    cout << sum;
    return 0;
}