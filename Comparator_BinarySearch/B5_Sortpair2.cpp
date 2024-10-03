#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FOR(i, a, b) for(int i = a; i < b; i++);
#define FORD(i, a, b) for(int i = a; i > b; i--);
#define f first
#define s second

bool cmp(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b){
    if(a.f != b.f) return a.f < b.f;
    else if(a.s.f != b.s.f) return a.s.f < b.s.f;
    else return a.s.s < b.s.s;
}

int main(){
    faster();
    int n; cin >> n;
    pair<int, pair<int, int>> a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i].f >> a[i].s.f >> a[i].s.s;
    }
    sort(a, a + n, cmp);
    for(auto it : a){
        cout << it.f << " " << it.s.f << " " << it.s.s << endl;
    }
    return 0;
}