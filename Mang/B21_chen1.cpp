#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, x, k; cin >> n >> x >> k;
    int A[n+1];
    for(int &t : A) cin >> t;
    for(int i = n; i >= k; i--){
        A[i] = A[i - 1];
    } A[k - 1] = x;
    for(int i = 0; i <= n; i++){
        cout << A[i] << " ";
    }
}