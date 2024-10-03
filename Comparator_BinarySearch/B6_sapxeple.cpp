#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FOR(i, a, b) for(int i = a; i < b; i++);
#define FORD(i, a, b) for(int i = a; i > b; i--);
#define f first
#define s second

int demle(int n){
    int dem = 0;
    while(n){
        if(n%2 == 1) dem++;
        n /= 10;
    }
    return dem;
}

bool cmp(int a, int b){
    if(demle(a) != demle(b)) return demle(a) > demle(b);
    else return a < b;
}

int main(){
    faster();
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n, cmp);
    for(int &x : a) cout << x << ' ';
    return 0;
}