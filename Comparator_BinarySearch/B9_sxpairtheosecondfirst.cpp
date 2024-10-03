#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define el '\n'
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FOR(i, a, b) for(int i = 0; i < n; i++)
#define FORD(i, a, b) for(int i = n; i > 0; i--)
#define f first
#define s second


bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.s != b.s) return a.s < b.s;
    else return a.f > b.f;
}

int main(){
    faster();
    int n; cin >> n;
    pair<int, int> a[n];
    FOR(i, 0, n)
        cin >> a[i].f >> a[i].s;
    sort(a, a + n, cmp);
    for(auto it : a)
        cout << it.f << " " << it.s << el;
    return 0;
}