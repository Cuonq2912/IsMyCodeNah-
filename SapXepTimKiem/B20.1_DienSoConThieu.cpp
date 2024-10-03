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

int cnt[1000001];

int main(){
    Faster();
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
   
    int l = INT_MAX, r = INT_MIN;
    FOR(i, 0, n){
        int x; cin >> x;
        cnt[x] = 1;
        l = min(l, x);
        r = max(r, x);
    }
    int dem = 0;
    for(int i = l; i < r; i++){
        if(cnt[a[i]] == 0){
            dem++;
        }
    }
    cout << dem << el;
    return 0;
}