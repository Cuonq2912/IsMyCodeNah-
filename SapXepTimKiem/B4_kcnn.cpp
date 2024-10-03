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
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    
    int ans = INT_MAX;
    for(int i = 0; i < n; i++){
        int tmp = fabs(a[i] - a[i + 1]);
        ans = min(ans, tmp);
    }
    cout << ans << el;
    return 0;
}