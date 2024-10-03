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

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.s < b.s;
}

int main(){
    Faster();
    int n; cin >> n;
    pair<int, int> a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i].f >> a[i].s; //
    }
    sort(a, a + n, cmp);
    int cnt = 1, end_time = a[0].s;
    FOR(i, 1, n){
        if(a[i].f > end_time){
            ++cnt;
            end_time = a[i].s;
        }
    }
    return 0;
}