#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define el '\n'
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define FOR(i, a, b) for(int i = 0; i < n; i++)
#define FORD(i, a, b) for(int i = n; i > 0; i--)
#define f first
#define s second

int snt(int n){
    int cnt = 0;
    while(n){
        int t = n % 10;
        if(t == 2 || t == 3 || t == 5 || t == 7){
            cnt++;
        }
        n /= 10;
    }
    return cnt;
}

bool cmp(int a, int b){
    return snt(a) > snt(b);
}

int main(){
    faster();
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    stable_sort(a, a + n, cmp);
    for(int &x : a) cout << x << ' ';
    return 0;
}