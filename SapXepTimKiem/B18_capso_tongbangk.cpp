#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define el '\n'
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define FORD(i, a, b) for(int i = a; i > b; i--)
#define f first
#define s second
#define pb push_back
#define Faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main(){
    Faster();
    int n, k;
    cin >> n >> k;
    int a[n];
    FOR(i, 0, n) cin >> a[i];
    sort(a, a + n);
    ll ans = 0;
    FOR(i, 0, n){
        auto lower = lower_bound(a + i + 1, a + n, k - a[i]);// vi tri dau tin
        auto upper = upper_bound(a + i + 1, a + n, k - a[i]);// vi tri cuoi
        ans += ll(upper - lower);
    }
    cout << ans << el;
    return 0;
}
//O(nlogn)