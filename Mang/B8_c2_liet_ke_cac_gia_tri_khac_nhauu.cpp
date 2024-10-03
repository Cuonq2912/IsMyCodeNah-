#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int check[100001];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    for(int i = 0; i < n; i++){
        if(check[a[i]] == 0){
            cout << a[i] << ' ';
            check[a[i]] = 1;
        }
    }
}