#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int a[n];
    int flag = 0;
    for(int &x : a) cin >> x;
    for(int i = 0; i < n; i++){
        if((a[i] % 2 == 0) && (i % 2 == 0)){
            cout << a[i] << ' ';
            flag = 1;
        }
    }if(!flag) cout << "NONE\n";
}