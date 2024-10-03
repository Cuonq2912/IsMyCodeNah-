#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    while(b){
        int t = a % b;
        a = b; b = t;
    } return a; 
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int res = a[0];
    for(int i = 1; i < n; i++){
        res = gcd(res, a[i]);
    } cout << res;
}