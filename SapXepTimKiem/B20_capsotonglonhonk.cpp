#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define el '\n'
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define FORD(i, a, b) for(int i = a; i > b; i--)
#define f first
#define s second
#define pb push_back
#define Faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main(){
    Faster();
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    ll cnt = 0;
    FOR(i, 0, n){
        auto it = upper_bound(a + i + 1, a + n, k - a[i]);
        cnt += a + n - it;
    }
    cout << cnt;
    return 0;
}