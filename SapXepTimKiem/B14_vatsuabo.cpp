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
    int n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n, greater<int>());
    ll ans = 0;
    for(int i = 0; i < n; i++){
        if(a[i] - i > 0)
        ans += (a[i] - i);
        else break;
    }
    cout << ans;
    return 0;
}