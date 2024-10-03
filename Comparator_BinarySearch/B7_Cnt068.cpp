#include<bits/stdc++.h>
using namespace std;

#define long long ll
#define endl '\n'
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FOR(i, a, b) for(int i = a; i < b; i++);
#define FORD(i, a, b) for(int i = a; i > b; i--);

int count068(int n){
    int cnt = 0;
    while(n){
        if(n % 10 == 0 || n % 10 == 6 || n % 10 == 8) ++cnt;
        n /= 10;
    }
    return cnt;
}

bool cmp(int a, int b){
    if(count068(a) != count068(b)) return count068(a) > count068(b);
    else return a < b;
}

int main(){
    faster();
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n, cmp);
    for(int &x : a) cout << x << " ";
    return 0;
}